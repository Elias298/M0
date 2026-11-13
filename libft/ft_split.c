/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:03:40 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/13 12:27:14 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "libft.h"

static void	del_arrs(char **arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
		free(arr[i++]);
}

static size_t	get_size(char const *str, char c)
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

bool	append_str(char **strs, size_t i, const char *str, size_t n)
{
	strs[i] = malloc(n + 1);
	if (strs[i] == NULL)
	{
		del_arrs(strs, i);
		return (false);
	}
	ft_memcpy(strs[i], str, n);
	strs[i][n] = 0;
	return (true);
}

char	**ft_split(char const *str, char c)
{
	const char	*prev;
	size_t		size;
	char		**strs;
	size_t		i;

	size = get_size(str, c);
	strs = malloc((size + 1) * sizeof(char *));
	if (strs == NULL)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		while (*str && *str == c)
			str++;
		prev = str;
		while (*str && *str != c)
			str++;
		if (str != prev)
			if (append_str(strs, i, prev, str - prev) == false)
				return (NULL);
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
