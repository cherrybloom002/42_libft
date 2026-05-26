/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 14:51:30 by ahodor            #+#    #+#             */
/*   Updated: 2026/05/25 14:51:31 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	**free_array(char **array, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static char	**fill_array(char **array, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	world_len;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			world_len = 0;
			while (s[i + world_len] && s[i + world_len] != c)
				world_len++;
			array[j] = ft_substr(s, i, world_len);
			if (!array[j])
				return (free_array(array, j));
			j++;
			i += world_len;
		}
		else
			i++;
	}
	array[j] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!array)
		return (NULL);
	return (fill_array(array, s, c));
}
