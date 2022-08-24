void    ft_ultimate_div_mod(int *a, int *b)
{
    int c = *a;
    *a = *a / *b;
    *b = c % *b;
}

#include<stdio.h>

int main()
{
    int a = 10;
    int b = 1;
    ft_ultimate_div_mod(&a, &b);
    printf("%d %d", a, b);
}