int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            i++;
        else
            return (0);
    }
    return (1);
}

#include <stdio.h>

int main ()
{
    char str[] = "lookmomicanfly";
    printf ("%d", ft_str_is_alpha(str));
}