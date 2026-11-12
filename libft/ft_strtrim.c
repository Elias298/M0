/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:11:43 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/12 18:33:37 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contains(char const *set, char c)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*end;
	char		*res;

	while (contains(set, *s1))
		s1++;
	end = s1;
	while (*end)
		end++;
	end--;
	while (end >= s1 && contains(set, *end))
		end--;
	return (ft_substr(s1, 0, end - s1 + 1));
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	char *res = ft_strtrim(argv[1], argv[2]);
	puts(res);
	free(res);
}
*/
