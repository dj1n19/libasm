
    section .text
    global  ft_strlen
    
ft_strlen:
        xor     rax, rax    ; initialize counter
        jmp    loop

increment:
        inc     rax

loop:
        cmp     BYTE [rdi + rax], 0  ; rdi -> str
        jne     increment
        ret