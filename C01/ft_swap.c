#include <unistd.h>
// #include <stdio.h>
void ft_swap (int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}

int main (void)
{
    int x;
    int y;

    x = 42;
    y = 24;
    ft_swap (&x, &y);
    // printf ("%d\n", x);
    // printf("%d\n", y);
    return(0);
}