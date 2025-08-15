#include <unistd.h>
// #include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
int main (void)
{
    int x = 58;
    int y = 10;
    int division;
    int modulo;
    ft_div_mod(x, y, &division, &modulo);
    // printf ("%d", division);
    // printf ("%d\n", modulo);
    return (0);
}