#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int     ft_strlen(const char *str);
ssize_t ft_write(int fildes, const char *buf, size_t nbyte);
char    *ft_strcpy(char *dst, const char *src);
int     ft_strcmp(const char *s1, const char * s2);
ssize_t ft_read(int fildes, void *buf, size_t nbyte);
char    *ft_strdup(const char *s1);
// long ft_strdup(const char *s1);

// void    seg(int sig)
// {
//     (void)sig;
//     register long *rax asm("rax");
//     printf("rax: [%p]:%ld\n", rax, *rax);
//     //exit(EXIT_FAILURE);
//     return ;
// }

int main(void)
{
//     // FT_STRLEN
//     printf("=== FT_STRLEN ===\n");
//     printf("%s:%d\n", "gnah", ft_strlen("gnah"));
//     printf("%s:%d\n", "-", ft_strlen("-"));
//     printf("%s:%d\n", "", ft_strlen(""));
//    // printf("%s:%d\n", NULL, ft_strlen(NULL));

//     // FT_WRITE
//     printf("\n=== FT_WRITE ===\n");
//     printf("->%zd\n", ft_write(1, "gnah\n", 5));
//     printf("->%zd\n", ft_write(-1, "gnah\n", 0));
//     perror("ERROR");
//     printf("->%zd\n", ft_write(1, "gnah\n", -1));
//     perror("ERROR");
//     printf("->%zd\n", ft_write(1, NULL, 5));
//     perror("ERROR");
    
//     // FT_STRCPY
//     printf("\n=== FT_STRCPY ===\n");
//     char    dst[10];
//     char    src[] = "alpaga";
//     strcpy(dst, "*********");
//     printf("<dst:%s>\n", dst);
//     ft_strcpy(dst, src);
//     printf("'%s' -> '%s'\n", src, dst);
//     printf("BYTE DST:\n");
//     for(int i = 0;i<10;++i)
//         printf("%d ", dst[i]);
//     printf("\n");

//     // FT_STRCMP
//     printf("\n=== FT_STRCMP ===\n");
//     printf("ft:%d\n", ft_strcmp("chameau", "chamelle"));
//     printf("lc:%d\n", strcmp("chameau", "chamelle"));
//     printf("ft:%d\n", ft_strcmp("chamelle", "chameau"));
//     printf("lc:%d\n", strcmp("chamelle", "chameau"));
//     printf("ft:%d\n", ft_strcmp("lama", "lama"));
//     printf("lc:%d\n", strcmp("lama", "lama"));
//     printf("ft:%d\n", ft_strcmp("", "lama"));
//     printf("lc:%d\n", strcmp("", "lama"));
//     printf("ft:%d\n", ft_strcmp("lama", ""));
//     printf("lc:%d\n", strcmp("lama", ""));
//     printf("ft:%d\n", ft_strcmp("", ""));
//     printf("lc:%d\n", strcmp("", ""));

    // FT_STRDUP
    //signal(SIGSEGV, seg);
    printf("ft_strdup: [%p]\n", ft_strdup);
    printf("%s\n", ft_strdup("GNAH"));
    //char *s = ft_strdup("GNAH");
    //printf("%s\n", s);
    //printf("src = '%s'\ncopy = '%s'\n", str, ft_strdup(str));

    // // FT_READ
    // printf("\n=== FT_READ ===\n");
    // int fd = open("Makefile", O_RDONLY);
    // if (fd < 0)
    //     exit(EXIT_FAILURE);
    // char buf[100];
    // ssize_t ret = ft_read(fd, buf, 99);
    // buf[ret] = 0;
    // printf("%s\n%zd\n", buf, ret);
    // *buf = 0;
    // ret = ft_read(-1, buf, 99);
    // buf[ret] = 0;
    // printf("%s\n%zd\n", buf, ret);
    // perror("ERROR");
    // *buf = 0;
    // ret = ft_read(fd, NULL, 99);
    // buf[ret] = 0;
    // printf("%s\n%zd\n", buf, ret);
    // perror("ERROR");
    // *buf = 0;
    // ret = ft_read(fd, buf, -1);
    // buf[ret] = 0;
    // printf("%s\n%zd\n", buf, ret);
    // perror("ERROR");


    return 0;
}