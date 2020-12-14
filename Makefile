VERSION = 4.0.0

CFLAGS = -ffreestanding -z max-page-size=0x1000 -mno-red-zone -mno-mmx -mno-sse -mno-sse2 -std=gnu99 -O2 -Wall -Wextra

all: init kernel
	@echo Build done

run: iso
	qemu-system-i386 -fda bin/boot.bin

init:
	@mkdir -vp bin

kernel: src/boot.asm src/link.ld src/loader.c src/kernel.c
	nasm -felf32 src/boot.asm -o bin/boot.o
	
	$(CC) -m32 -c src/loader.c -o bin/loader.o $(CFLAGS)
	$(CC) -m64 -c src/kernel.c -o bin/kernel.o $(CFLAGS)

	$(CC) -m32 -T src/link.ld bin/loader.o -o bin/loader.bin -ffreestanding -O2 -nostdlib -lgcc -Wl,--build-id=none
	rm bin/boot.o bin/loader.o
	
	$(CC) -m64 -o bin/kernel.bin bin/*.o -ffreestanding -O2 -nostdlib -lgcc
	rm bin/*.o

iso: init kernel
	@cp bin/kernel.bin iso/boot
	@cp bin/loader.bin iso/boot
	@mkdir -vp iso
	@cp -r boot/ iso/
	grub-mkrescue -o CyxOS-v$(VERSION).iso iso/
