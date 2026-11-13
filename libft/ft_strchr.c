/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:30:40 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/13 02:52:28 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *)s);
		s++;
	}
	if ((char) c == 0)
		return ((char *)s);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	puts(ft_strchr(argv[1], argv[2][0]));
}
*/
