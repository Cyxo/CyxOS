VERSION=4.0.0

all: init kernel
	@echo Build done

run: iso
	qemu-system-i386 -fda bin/boot.bin

init:
	@mkdir -vp bin

kernel: src/link.ld src/kernel.c
	$(CC) -ffreestanding -mcmodel=large -mno-red-zone -mno-mmx -mno-sse -mno-sse2 -c src/kernel.c -o bin/kernel.o

	$(CC) -ffreestanding -z max-page-size=0x1000 -T src/link.ld bin/kernel.o -o kernel.bin -nostdlib -lgcc

iso: all
    cp bin/kernel.bin boot/
    mkdir iso
    cp -r boot/ iso/
    grub-mkrescue -o CyxOS-v$(VERSION).iso iso/
