section .data
    format db "Hello, Holberton", 0

section .text
    extern printf

    global _start

_start:
    ; Call printf with the format string
    mov rdi, format
    xor rax, rax
    call printf

    ; Exit the program
    mov eax, 60                 ; System call number for exit
    xor edi, edi                ; Exit status 0
    syscall                     ; Invoke the system call
