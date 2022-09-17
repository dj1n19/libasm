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
    jz      exit
    cmp     BYTE [rsi + rcx], 0
    jz      exit
    cmp     dl, dh
    jne     exit
    inc     rcx
    jmp     loop

exit:
    cmp     dl, dh
    jg      greater
    jl      lower
    mov     rax, 0
    ret

lower:
    mov     rax, -1
    ret

greater:
    mov     rax, 1
    ret