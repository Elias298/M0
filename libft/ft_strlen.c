/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:14:29 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/10 21:05:16 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	siz;

	siz = 0;
	while (s[siz] != 0)
		siz++;
	return (siz);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	printf("%lu\n", ft_strlen(argv[1]));
}
*/
