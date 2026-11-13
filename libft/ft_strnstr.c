/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 15:20:40 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/13 13:26:10 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	m;

	if (! *to_find)
		return ((char *)(str));
	while (n && *str)
	{
		i = 0;
		m = n;
		while (m && to_find[i] && (str[i] == to_find[i]))
		{
			i++;
			m--;
		}
		if (to_find[i] == 0)
			return ((char *) str);
		str++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	char *res2 = ft_strnstr(argv[1], argv[2], atoi(argv[3]));
	if (res2 == 0)
		puts("ft_strnstr didnt find");
	else
		printf("ft_strnstr found at %s\n", res2);
}
*/
