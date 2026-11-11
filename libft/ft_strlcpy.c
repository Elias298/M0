/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 00:26:19 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/11 17:51:05 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	const char	*og;

	og = src;
	while (*src && size > 1)
	{
		*dest++ = *src++;
		size--;
	}
	if (size)
		*dest = 0;
	while (*src)
		src++;
	return (src - og);
}
/*
#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv){
	(void) argc;
	char buff[10] = {1,1,1,1,1,1,1,1,1,1};
	unsigned int res = ft_strlcpy(buff, argv[1], argv[2][0] - '0');
	write(1, buff, 10);
}
*/
