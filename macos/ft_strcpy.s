    global  _ft_strcpy

    section .text

_ft_strcpy:
    xor     rcx, rcx
    xor     rdx, rdx

loop:
    cmp     BYTE [rsi + rcx], 0
    je      exit
    mov     dl, BYTE [rsi + rcx]
    mov     BYTE [rdi + rcx], dl
    inc     rcx
    jmp     loop

exit:
    mov     BYTE [rdi + rcx], 0
    mov     rax, rdi
    ret