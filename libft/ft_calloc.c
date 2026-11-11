/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 23:15:32 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/11 23:52:26 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			n;
	size_t			i;
	unsigned char	*buf;

	n = nmemb * size;
	buf = malloc(n);
	i = 0;
	while (i < n)
		buf[i++] = 0;
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
