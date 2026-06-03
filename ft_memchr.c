/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <ahodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 10:46:37 by ahodor            #+#    #+#             */
/*   Updated: 2026/06/03 16:42:04 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		i;
	const unsigned char	*p;

	if (!s)
		return (NULL);
	i = (unsigned char)c;
	p = (const unsigned char *)s;
	while (n > 0)
	{
		if (*p == i)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}
