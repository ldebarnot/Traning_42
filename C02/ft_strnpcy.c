#include <unistd.h>
#include <stdio.h>
char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    i = 0;


    while(i != n && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
        return(dest);
}
int main()
{
    char dest[15];
    char src[] = "piscine";
    unsigned int size = 4;
    ft_strncpy(dest, src, size);
    printf("%s\n", dest);
    return(0);
}