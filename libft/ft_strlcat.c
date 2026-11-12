/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:43:36 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/11 17:53:07 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	dst_len = 0;
	while (dest[dst_len] && dst_len < size)
		dst_len++;
	i = 0;
	while (src[i] && i + 1 < size - dst_len)
	{
		dest[i + dst_len] = src[i];
		i++;
	}
	if (i < size - dst_len)
		dest[i + dst_len] = 0;
	return (src_len + dst_len);
}
/*
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	char buff[20];

	for(int i=0; i<20; i++) buff[i] = 17;

	(void) argc;
	strcpy(buff, argv[1]);
	ft_strlcat(buff, argv[2], atoi(argv[3]));
	write(1, buff, 20);
}
*/
