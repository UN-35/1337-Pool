/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:04:15 by yoelansa          #+#    #+#             */
/*   Updated: 2022/08/03 13:19:20 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		srclen;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	srclen = i;
	dest = malloc (sizeof (char) * srclen + 1);
	i = 0;
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
