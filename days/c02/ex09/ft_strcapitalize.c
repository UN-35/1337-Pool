char	*ft_strlowcase(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 32;
		i++;
	}
	return (s);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
 
	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		while (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9')))
			i++;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		while ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
			i++;
	}
	return (str);
}

#include<stdio.h>

int main(){
	char s[]="nEver Look 8hind";
	printf("%s", ft_strcapitalize(s));
}
