int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] && i < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (l);
}

#include<stdio.h>
int main(){
	char ds[]="never look";
	char sr[]="8hind";
	printf("%d %s", ft_strlcpy(ds, sr, 3), ds);
}