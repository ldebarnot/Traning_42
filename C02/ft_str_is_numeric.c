#include <unistd.h>
#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;
    i = 0;

    if (*str == 0)
    return(1);

    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
        return(0);
    }
    return(1);
}
int main ()
{
    printf("%d\n", ft_str_is_numeric("12345"));   // 1
    printf("%d\n", ft_str_is_numeric("42abc"));   // 0
    printf("%d\n", ft_str_is_numeric(""));        // 1
    return(0);
}