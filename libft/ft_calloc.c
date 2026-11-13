/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 23:15:32 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/13 02:51:09 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			n;
	unsigned char	*buf;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	n = nmemb * size;
	buf = malloc(n);
	if (buf == NULL)
		return (NULL);
	ft_bzero(buf, n);
	return (buf);
}
/*
#include <unistd.h>
int main(int argc, char **argv) {
	(void) argc;
	int n = atoi(argv[1]);
	void *buff = ft_calloc(n, 1);
	write(1, buff, 25);
	free(buff);
}
*/
