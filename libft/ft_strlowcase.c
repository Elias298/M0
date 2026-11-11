/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 02:22:46 by esaliba           #+#    #+#             */
/*   Updated: 2026/07/31 02:25:34 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char		*og;

	og = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (og);
}
/*
#include <stdio.h>
int main(int argc, char** argv)
{
	while (*argv != NULL)
		puts(ft_strlowcase(*argv++));
}
*/
