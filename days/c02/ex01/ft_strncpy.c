char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;
    int j;

    i = 0;
    j = 0;
    while (src[i] && i < n)
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}

#include <stdio.h>

int main()
{
    char s[] = "look mom i can fly";
    char d[] = "llok moampknefc alkjnds alskn lk";
    printf("%s", ft_strncpy(d, s, 4));
}