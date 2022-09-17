    global  ft_strcpy

    section .text

ft_strcpy:
    xor     rcx, rcx
    xor     rdx, rdx
    jmp     loop

loop:
    cmp     BYTE [rsi + rcx], 0
    je      exit

copy:
    mov     dl, BYTE [rsi + rcx]
    mov     BYTE [rdi + rcx], dl
    inc     rcx
    jmp     loop

exit:
    mov     rax, rdi
    ret