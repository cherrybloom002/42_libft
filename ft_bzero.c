/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <ahodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:23:11 by ahodor            #+#    #+#             */
/*   Updated: 2026/06/03 16:40:38 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	if(!s)
		return (NULL);
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
