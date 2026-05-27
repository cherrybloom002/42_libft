/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:56:09 by ahodor            #+#    #+#             */
/*   Updated: 2026/05/18 15:22:38 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++
		}
	}
	else
	{
		while (0 < len--)
			d[n] = s[n];
	}
	return (d);
}
