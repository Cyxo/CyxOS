
# My journey through creating my own operating system

## Intro

Creating my own OS from scratch... what a hell of an idea?! Nowadays, there are operating systems that work very well like Windows, Linux or Mac OS, plus they are already based on more barebones OSes like UNIX or DOS. Nobody would be mad enough to create their own OS, deal with the hassle of the Assembly language and spend way too much time just on trying to get something that actually boots!

Well... while that may be true, there is a strangely big community around OS development. I'll link some very interesting and useful resources made by the community. In addition to what I said earlier, the OS that I've made here only contains one Assembly file that could be shrunk down to 7 instructions (the rest of it being hardcoded magic numbers basically), so that's not really what I would call a hassle. The rest of the code is in C (C++ or Rust are also pretty popular among OS developers). And if you think that using C makes it less optimized than bare Assembly, just know that C with compiler optimization is probably better than poorly written Assembly written by someone who doesn't really master this art 😉

## What were CyxOS 1, 2 and 3 ?

As you may have read, CyxOS v4 is my 4th serious attempt at making OSes. So here is the prequel to my journey:
- CyxOS: It was an OS made from scratch following [this tutorial](https://www.cs.bham.ac.uk/~exr/lectures/opsys/10_11/lectures/os-dev.pdf). It was only 16-bit but was able to use BIOS functions to print the current time and a colorful Hello World. It used a home-made Assembly boot-loader which was very unusable because the size of the kernel had to be hardcoded. I tried to write some assembly to detect the size of the kernel but eventually failed, broke my beautiful first OS and was unable to go back.
- CyxOS v2 (git): Not so proud of loosing all my work, I started again using git as a version manager to not loose everything if I fail. But this time I followed the tutorial all the way through, without getting fancy with a clock, and reached the 32-bit section. Unfortunately, the PDF tutorial is incomplete and the interesting parts with File System are empty.
- CyxOS v3 (git+osdev): I mostly copy-pasted every bit of code from [this tutorial](https://wiki.osdev.org/Bare_Bones) without understanding what I was doing, but keeping the old home-made Assembly bootloader from the previous tutorial...

Now with CyxOS v4, I'm trying to make a 64-bit OS (which is not a lot more complicated than a 32-bit one if you use `multiboot`). I will try to develop every kernel module on my own. My ambition is, by the end of this project, that CyxOS becomes the first OS to natively execute both ELF and PE executable formats.

## The beginning

I knew I wanted to make a 64-bit OS that would be able to boot using GRUB (the GRand Unified Bootloader) instead of a home-made bootloader. GRUB is cool because almost everyone who has Linux on their machine uses it. However, it looks like GRUB isn't made to boot 64-bit kernels. Fortunately, a library called multiboot, which is supported by GRUB, does the trick.

To begin with, I created all the files needed to boot an OS with multiboot, making a clever mix of these three tutorials on the OSDev Wiki:
- [Bare Bones with NASM](https://wiki.osdev.org/Bare_Bones_with_NASM) for the skeleton of the Assembly bootstrap.
- [Creating a 64-bit kernel using a separate loader](https://wiki.osdev.org/Creating_a_64-bit_kernel_using_a_separate_loader) for the instructions of the bootstrap and the C 32-bit loader
- [Bare Bones](https://wiki.osdev.org/Bare_Bones) for the `linker.ld` file (that I modified to use my bootstrap for the multiboot headers and to start the loader)

You can see most of these implementations in [this commit](https://github.com/Cyxo/CyxOS/commit/077d4c54ab4e8de33e14525aeefd75e6e741e2bc). A big part of the job was also to find the right commands to build the whole thing (with a 32-bit loader and a 64-bit kernel), which I put in the Makefile. Now that this work, it won't be difficult for me to compile more files and link them together.

So now, it's time we focus on creating the kernel!

## References
1. Nick Blundell - *Writing a Simple Operating System - from Scratch* : https://www.cs.bham.ac.uk/~exr/lectures/opsys/10_11/lectures/os-dev.pdf
2. OSDev Wiki : https://wiki.osdev.org/