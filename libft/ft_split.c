/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:03:40 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/13 02:37:52 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	get_size(char const *str, char c)
{
	int		size;

	size = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
			size++;
		while (*str && *str != c)
			str++;
	}
	return (size);
}

char	**ft_split(char const *str, char c)
{
	const char	*prev;
	int			size;
	char		**strs;
	int			i;

	size = get_size(str, c);
	strs = malloc((size + 1) * sizeof(char *));
	i = 0;
	while (i < size)
	{
		while (*str && *str == c)
			str++;
		prev = str;
		while (*str && *str != c)
			str++;
		if (str != prev)
		{
			strs[i] = malloc(str - prev + 1);
			ft_memcpy(strs[i], prev, str - prev);
			strs[i][str - prev] = 0;
		}
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	char **res = ft_split(argv[1], argv[2][0]);
	char **og = res;
	for(int i=0; res[i] != NULL; i++)
		puts(res[i]);
	while(*res != NULL)
		free(*res++);
	free(og);
}
*/
