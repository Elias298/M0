/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:30:40 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/11 17:41:47 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*res;

	res = 0;
	while (*s)
	{
		if (*s == c)
			res = s;
		s++;
	}
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
