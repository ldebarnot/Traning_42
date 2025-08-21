#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    if (*str == 0)
    return(1);
    while(str[i])
    {
        if ((str[i] >= 'A' && str[i] <= 'Z')|| (str[i] >= 'a' && str[i] <= 'z'))
        i++;
        else
        return(0);
    }
    return(1);
}
int main()
{
    printf("%d\n", ft_str_is_alpha("Piscine"));   // 1
    printf("%d\n", ft_str_is_alpha("42"));        // 0 
    printf("%d\n", ft_str_is_alpha("Hello42"));   // 0
    printf("%d\n", ft_str_is_alpha(""));          // 1

    return(0);   
}