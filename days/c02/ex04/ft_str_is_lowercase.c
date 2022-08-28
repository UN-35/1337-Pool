int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return (0);
    }
    return (1);
}

#include<stdio.h>

int main()
{
    char s[] = "nolookbehind";
    printf("%d", ft_str_is_lowercase(s));
}