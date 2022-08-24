void    ft_swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

#include<stdio.h>

int main()
{
    int a = 7;
    int b = 2;
    ft_swap(&a, &b);
    printf("%d%d", a, b);
}