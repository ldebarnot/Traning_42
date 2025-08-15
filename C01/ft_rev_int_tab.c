#include <unistd.h>
// #include <stdio.h>
void ft_swap (int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}
void ft_rev_int_tab(int *tab, int size)
{
    int i;
    i = 0;
    
    while (i < size / 2)
        {
          ft_swap(&tab[i], &tab[size - 1 - i]);
          i++;
        }
}

int main(void)
{
    int a;
    a = 0;
    int tab[5] = {1, 2, 3, 4, 5};
    ft_rev_int_tab(tab, 5);
    /*tab devient {5, 4, 3, 2, 1}
    while ( a < 5)
    {
    printf("%d ", tab[a]);
    a++;
    }*/ 
    return(0);
}