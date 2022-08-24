int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

#include<stdio.h>

int main()
{
    char s[] = "look mom i can fly";
    printf("%d", ft_strlen(s));
}