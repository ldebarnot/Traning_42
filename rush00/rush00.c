#include <unistd.h>
//ligne x
//col y
int put_box(int **tab, int x, int y)
{
    int *box = 1;
        while (y < 6)
        if (tab[x][y] == 4)
        {
            box = 4;
            return(box);
        }
        else if (tab[x][y] == 1)
        {
            while (box < 5)
            {
                return(box);
                box++;
            }
        }
}
int possible_box4(int **tab, int x, int y)
{
    int *box;
    if (tab[x] == 4)
        {
            box = {4, 3, 2 , 1};
            box = {4, 3 , 1, 2};
            box = {4, 2, 3, 1};
            box = {4, 2, 1, 3};
            box = {4, 1, 2, 3};
            box = {4, 1, 3, 2};
            return (box);
        }
        return (0)
}
int possible_box3(int **tab, int x, int y)
{
    int *box;
    if (tab[x] == 3)
    {
        box = {1, 2, 4, 3};
        box = {1, 3, 4, 2};
        box = {1, 3, 2, 4};
        box = {2, 3, 4, 1};
        box = {2, 1, 3, 4};
        box = {2, 3, 1, 4};
        return (box);
    }
    return (0);
}
int possible_box2(int **tab, int x, int y)
{
    int *box;
    if (tab[x] == 2)
    {
        box = {1, 4, 3, 2};
        box = {1, 4, 2, 3};
        box = {2, 4, 3, 1};
        box = {2, 4, 1, 3};
        box = {2, 1, 4, 3};
        box = {3, 2, 1, 4};
        box = {3, 1, 2, 4};
        box = {3, 2, 4, 1};
        box = {3, 1, 4, 2};
        box = {3, 4, 1, 2};
        box = {3, 4, 2, 1};
    }
    else if (box[x] == 1)
        box = {1, 2, 3, 4};
    return (box);
}