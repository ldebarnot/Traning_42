#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[p] = '\0';
    return (dest);
}

int main(void)
{
    char src[] = "Piscine42";
    char dest[20]; // Assez grand pour contenir src

    ft_strcpy(dest, src);
    printf("%s\n", dest); // Affiche "Piscine42"
    return (0);
}