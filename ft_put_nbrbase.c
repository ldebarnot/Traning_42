#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
            i++;
    return(i);
}
int check_negpos (char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] == '+' || str[i] == '-')
                    return(1);
        i++;
    }
    return(0);
}
int has_duplicates(char *str)
{
    int i, j;

    i = 0;
    while (str[i])
    {
        j = i + 1;
        while (str[j])
        {
            if (str[i] == str[j])
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}
int check(char *base)
{
    int len = ft_strlen(base);
    if(len < 2)
        return(1);
    else if(check_negpos(base))
        return(1);
    else if(has_duplicates(base))
        return(1);
    else 
        return(0);


}

void ft_putnbr_base(int nbr, char *base)
{
    int long nb;
    int len = ft_strlen(base);
    int i = 0;

    if (nbr < 0)
        nbr -= nbr;
    nb = nbr;
    while (base[i])
    
}