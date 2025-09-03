#include <stdlib.h>
int ft_strlen(char **str, char *sep)
{
    int i;

    i = 0;
    while(str[i])
            i++;
    return (i);
}
char ft_strcat(char **str, char *newstr, char *sep)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] == ' ')
            newstr[j] = sep;
        newstr[j] = str[i];
        i++;
        j++;
    }
}
char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    char *newstr;

    sep = ' ';
    i = 0;
    size = ft_strlen(str);
    newstr = malloc((char) * size);
    ft_strcat(strs, newstr, sep);
    if (newstr == 0)
    {
        
    }
}
int main(int ac, char **av)
{
    int i;
    i = 0;
    int size;
    
    if (ac > 1)
    {
        ft_strjoin(av)
    }    
}