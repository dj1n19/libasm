#include <stdio.h>
#include <unistd.h>
#include <string.h>

int     ft_strlen(const char *str);
ssize_t ft_write(int fd, const void *buf, size_t nbyte);
char    *ft_strcpy(char *restrict dest, const char *src);
int     ft_strcmp(const char *s1, const char *s2);

int main(void)
{
    printf(">%d\n", ft_strlen("gnah"));

    printf(">%ld\n", ft_write(1, "gnah\n", 5));
    printf(">%ld\n", ft_write(1, "gnah\n", 2));
    printf(">%ld\n", ft_write(-1, "gnah\n", 2));
    perror("ERROR");
    printf(">%ld\n", ft_write(1, NULL, 1));
    perror("ERROR");

    char    dest[9];
    char    src[] = "gnah";
    strcpy(dest, "chaameau");
    printf("%s => %s\n", src, ft_strcpy(dest, src));

    printf(">%d\n", ft_strcmp("lama", "lama"));
    printf(">>%d\n", strcmp("lama", "lama"));
    printf(">%d\n", ft_strcmp("chameau", "chamelle"));
    printf(">>%d\n", strcmp("chameau", "chamelle"));
    printf(">%d\n", ft_strcmp("chamelle", "chameau"));
    printf(">>%d\n", strcmp("chamelle", "chameau"));

    return 0;
}