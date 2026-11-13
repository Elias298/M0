/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 12:52:59 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/13 01:06:40 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*buf1;
	const unsigned char	*buf2;

	buf1 = s1;
	buf2 = s2;
	if (! n)
		return (0);
	while (*buf1 == *buf2 && --n)
	{
		buf1++;
		buf2++;
	}
	return (*buf1 - *buf2);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
	(void) argc;
	printf("%d\n", ft_memcmp(argv[1], argv[2], atoi(argv[3])));
	printf("%d\n", memcmp(argv[1], argv[2], atoi(argv[3])));
}
*/
