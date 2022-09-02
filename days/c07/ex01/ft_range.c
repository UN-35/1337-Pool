/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:27:56 by yoelansa          #+#    #+#             */
/*   Updated: 2022/08/02 18:16:41 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	s;

	s = max - min;
	if (min >= max)
		return (0);
	tab = malloc (sizeof (int) * s);
	i = 0;
	while (i < s)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
