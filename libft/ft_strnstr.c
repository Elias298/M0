/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 15:20:40 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/11 22:56:56 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int		i;

	i = 0;
	while (to_find[i] && *str && n)
	{
		if (to_find[i] == *str)
			i++;
		else
			i = 0;
		str++;
		n--;
	}
	if (to_find[i])
		return (0);
	return ((char *)(str - i));
}
/*
#include <stdio.h>
#include <stdlib.h>
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
