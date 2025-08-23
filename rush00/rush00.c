void ft_putchar (char c)
{
    write (1, &c, 1);
}
void    print_top(char l)
{
    ft_putchar('A');
    while (l > 2)
    {
        ft_putchar('B');
        l--;
    }
    ft_putchar ('A');
}