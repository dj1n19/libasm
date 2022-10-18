
    section .text
    global  _ft_strdup
    extern  _malloc
    extern  ___error

_ft_strdup:
        cmp     rdi, 0
        jz      error
        xor     rcx, rcx
        jmp     len

increment:
        inc     rcx

len:
        cmp     BYTE [rdi + rcx], 0
        jne     increment

malloc:
        push    rbp
        sub     rsp, 16
        inc     rcx
        push    rdi
        push    rcx
        mov     rdi, rcx
        call    _malloc
        jc      e_malloc
        pop     rcx
        pop     rdi

decrement:
        dec     rcx

copy:
        cmp     rcx, 0
        jl      exit
        mov     dl, BYTE [rdi + rcx]
        mov     BYTE [rax + rcx], dl
        dec     rcx
        jmp     copy

e_malloc:
        push    rax
        call    ___error
        pop     QWORD [rax]

error:
        pop     rbp
        add     rsp, 16
        mov     rax, 0
        ret

exit:
        pop     rbp
        add     rsp, 16
        ret