    global  _ft_strcmp

    section .text

_ft_strcmp:
    xor     rax, rax
    xor     rcx, rcx
    xor     rdx, rdx

loop:
    mov     dl, BYTE [rdi + rcx]
    mov     dh, BYTE [rsi + rcx]
    cmp     dl, 0
    je      exit
    cmp     dh, 0
    je      exit
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

greater:
    mov     rax, 1
    ret

lower:
    mov     rax, -1
    ret