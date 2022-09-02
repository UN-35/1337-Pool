/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:00:48 by yoelansa          #+#    #+#             */
/*   Updated: 2022/08/03 13:20:22 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strcat(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	j;
	int	a;
	int	b;

	i = 0;
	a = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[a++] = strs[i][j++];
		if (i < size - 1)
		{
			b = 0;
			while (sep[b])
				str[a++] = sep[b++];
		}
		i++;
	}
	str[a] = '\0';
	return (str);
}

int	strslen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	l = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			l++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	l = l + i * (size - 1);
	return (l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*str;

	if (size == 0)
	{
		str = malloc(1);
		return (str);
	}
	len = strslen(size, strs, sep);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	return (ft_strcat(size, strs, sep, str));
}
