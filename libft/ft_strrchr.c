/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:30:40 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/13 02:52:52 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*res;

	res = 0;
	while (*s)
	{
		if (*s == (char) c)
			res = s;
		s++;
	}
	if ((char) c == 0)
		return ((char *)s);
	return ((char *)res);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	puts(ft_strrchr(argv[1], argv[2][0]));
}
*/
