/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <ahodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 13:57:34 by ahodor            #+#    #+#             */
/*   Updated: 2026/06/03 16:43:23 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	if (!s)
		return (NULL);
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
