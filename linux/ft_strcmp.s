    global  ft_strcmp
    
    section .text

ft_strcmp:
    xor     rax, rax
    xor     rcx, rcx
    xor     rdx, rdx

loop:
    mov     dl, BYTE [rdi + rcx]
    mov     dh, BYTE [rsi + rcx]
    cmp     BYTE [rdi + rcx], 0
    jz      is_neg
    cmp     BYTE [rsi + rcx], 0
    jz      is_neg
    cmp     dl, dh
    jne     is_neg
    inc     rcx
    jmp     loop

is_neg:
    cmp     dl, dh
    jl      neg

break:
    mov     al, dl
    sub     al, dh
    ret

neg:
    or      al, 128
    jmp     break