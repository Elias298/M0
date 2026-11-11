/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 12:52:59 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/11 17:46:38 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char s1[], const char s2[], size_t n)
{
	if (! n)
		return (0);
	while (*s1 == *s2 && --n)
	{
		if (*s1 == 0)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
	(void) argc;
	printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("%d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
}
*/
