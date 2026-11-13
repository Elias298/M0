/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 11:45:55 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/13 13:34:27 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	size_t	len1;
	size_t	len2;

	if (! s1 || ! s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = malloc(len1 + len2 + 1);
	if (res == NULL)
		return (NULL);
	ft_memcpy(((char *)ft_memcpy(res, s1, len1)) + len1, s2, len2 + 1);
	return (res);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	char *res = ft_strjoin(argv[1], argv[2]);
	puts(res);
	free(res);
}
*/
