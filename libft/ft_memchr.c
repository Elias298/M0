/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:30:40 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/12 11:22:13 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		chr;

	p = s;
	chr = c;
	while (n)
	{
		if (*p == chr)
			return ((void *)p);
		p++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	puts(ft_memchr(argv[1], argv[2][0]));
}
*/
