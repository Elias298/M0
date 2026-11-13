/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 12:48:10 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/13 02:28:13 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	realen;
	size_t	s_len;
	char	*res;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		res = malloc(1);
		res[0] = 0;
		return (res);
	}
	realen = 0;
	while (s[realen + start] && realen < len && realen < s_len - start)
		realen++;
	res = malloc(realen + 1);
	if (res == NULL)
		return (0);
	res[realen] = 0;
	return (ft_memcpy(res, s + start, realen));
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	char *res = ft_substr(argv[1], atoi(argv[2]), atoi(argv[3]));
	puts(res);
	free(res);
}
*/
