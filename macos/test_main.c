#include <stdio.h>

void    *test(void);

void    fun(void)
{
    int i = 0;
    i++;    
}

int main(void)
{
    register unsigned long   *rbp asm("rbp");
    register unsigned long   *rsp asm("rsp");
    void                     *p;

    p = test();

    printf("RBP: [%p]\n", rbp);
    printf("RSP: [%p] RBP + %ld\n", rsp, rbp - rbp);
    printf("MAL: [%p] RBP + %ld\n", p, (unsigned long)rbp - (unsigned long)p);
    char *s = (char *) p;
    *s = 'g';
    *(s + 1) = 'n';
    *(s + 2) = 'a';
    *(s + 3) = 'h';
    *(s + 4) = '\0';
    printf("%s\n", p);

    return 0;    
}