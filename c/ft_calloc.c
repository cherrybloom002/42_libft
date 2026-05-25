/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:35:55 by ahodor            #+#    #+#             */
/*   Updated: 2026/05/25 10:35:57 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	unsigned char	*dst;
	size_t			tot_size;
	size_t			i;

	if (nmemb != 0 && size > (size_t) - 1 / nmemb)
		return (NULL);
	tot_size = nmemb * size;
	ptr = malloc(tot_size);
	if (ptr == NULL)
		return (NULL);
	dst = (unsigned char *)ptr;
	i = 0;
	while (i < tot_size)
	{
		dst[i] = 0;
		i++;
	}
	return (ptr);
}
