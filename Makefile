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