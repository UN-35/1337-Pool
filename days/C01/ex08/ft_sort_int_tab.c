void    ft_swap(int *a, int *b)
{
    int c = *a;

    c = *a;
    *a = *b;
    *b = c;
}

void    ft_sort_int_tab(int *tab, int size)
{
    int i;

    i = 0;
    while (tab[i])
    {
        if (tab[i] >= tab[i + 1])
        {
            ft_swap(&tab[i], &tab[i + 1]);
            i = -1;
        }
        i++;
    }
}

#include<stdio.h>

int main()
{
    int tab[] = {2,7,3,4,6,8,5,9,1,0};
    int size = 10;
    ft_sort_int_tab(tab, size);
    for(int i = 0; i < size; i++)
        printf("%d ", tab[i]);
}