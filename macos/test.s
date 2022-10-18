section .text
    global _main
    extern _malloc

_main:
    push    rbp
    sub     rsp, 16
    mov     rdi, 42
    call    _malloc
    add     rsp, 16
    pop     rbp
    ret