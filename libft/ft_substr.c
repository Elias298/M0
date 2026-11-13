/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 12:48:10 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/13 13:32:56 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	realen;
	size_t	s_len;
	char	*res;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		realen = s_len - start;
	else
		realen = len;
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
