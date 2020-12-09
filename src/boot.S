.extern main

.section .multiboot2

multiboot2_header_start:
/* magic number */
.long   0xe85250d6
/* architecture */
.long   0
/* header size */
.long   multiboot2_header_end - multiboot2_header_start
/* checksum */
.long   -(0xe85250d6 + (multiboot2_header_end - multiboot2_header_start))

/* tag end */
.align 8
.short   0
.short   0
.long   8
multiboot2_header_end:

# Reserve a stack for the initial thread.
.section .bootstrap_stack, "aw", @nobits
stack_bottom:
.skip 16384 # 16 KiB
stack_top:

.section .text.init

.global _start
.type _start, @function
_start:
   mov   $stack_top, %rsp

   /* Reset EFLAGS. */
   push  $0
   popf

   push  %rbx
   push  %rax

   call main

   cli
   hlt
.Lhang:
   jmp .Lhang

# Set the size of the _start symbol to the current location '.' minus its start.
# This is useful when debugging or when you implement call tracing.
.size _start, . - _start