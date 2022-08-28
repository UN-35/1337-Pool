int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if(str[i] >= 32 && str[i] <= 126)
            i++;
        else
            return (0);
    }
    return (1);
}

#include<stdio.h>

int main()
{
    char s[] = "No Look Behind \n";
    printf("%d", ft_str_is_printable(s));
}