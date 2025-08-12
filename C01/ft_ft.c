#include <unistd.h>
//  #include <stdio.h>
void ft_ft (int *nbr)
{
    *nbr = 42;
}

int main (void)
{
    int value;
    ft_ft(&value);
    //  printf("%d\n", value);
    return (0);
}