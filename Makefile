VERSION=4.0.0

all: init kernel
	@echo Build done

run: iso
	qemu-system-i386 -fda bin/boot.bin

init:
	@mkdir -vp bin

kernel:# src/kernel.c
	echo yay

iso: all
    cp bin/kernel.bin boot/
    mkdir iso
    cp -r boot/ iso/
    grub-mkrescue -o CyxOS-v$(VERSION).iso iso/
