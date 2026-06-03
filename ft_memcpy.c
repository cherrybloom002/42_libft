/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <ahodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:36:23 by ahodor            #+#    #+#             */
/*   Updated: 2026/06/03 16:43:37 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *d;
	unsigned char *s;
	
	i = 0;
	if (!dest || !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
