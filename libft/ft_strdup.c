/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 03:07:30 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/11 23:10:34 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		len;
	char	*buff;

	len = 0;
	while (s[len])
		len++;
	buff = malloc(len + 1);
	len = 0;
	while (s[len])
	{
		buff[len] = s[len];
		len++;
	}
	buff[len] = 0;
	return (buff);
}
/*
#include <stdio.h>
int main(int argc, char **argv){
	(void) argc;
	char *str;
	str = ft_strdup(argv[1]);
	puts(str);
	free(str);
}
*/
