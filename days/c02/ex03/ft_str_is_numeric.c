int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}

#include<stdio.h>

int main()
{
    char s[]="911";
    printf("%d", ft_str_is_numeric(s));
}