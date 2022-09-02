void    ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;

    i = size - 1;
    j = 0;
    while (i >= j)
    {
        ft_swap(&tab[i], &tab[j]);
        i--;
        j++;
    }
}

#include<stdio.h>

int main()
{
    int tab[]={1,2,3,4,5,6,7};
    int size = 7;
    ft_rev_int_tab(tab, size);
    for(int i = 0; i < size; i++)
        printf("%d ", tab[i]);
}