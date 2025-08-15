#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp = *a;
    *a = temp / *b;
    *b = temp % *b;

}
int main (void)
{
    int x = 375;
    int y = 10;
    ft_ultimate_div_mod(&x, &y);
    printf("%d", x);
    printf("%d\n", y);
    return(0);
}
