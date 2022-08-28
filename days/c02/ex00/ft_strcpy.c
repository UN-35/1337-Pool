char    *ft_strcpy(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (src[i])
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}

#include<stdio.h>

int main()
{
    char s[] = "look mom i can fly";
    char d[] = "llok moampknefc alkjnds alskn lk";
    printf("%s", ft_strcpy(d, s));
}