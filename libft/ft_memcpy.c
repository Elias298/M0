/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:14:44 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/11 14:04:35 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*csrc;
	unsigned char		*cdest;
	size_t				i;

	csrc = (const unsigned char *) src;
	cdest = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}
/*
#include <unistd.h>
int main(int argc, char **argv)
{
	(void) argc;
	char buf[12] = {-1, -1 ,-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	write(1, (char*) ft_memcpy(buf, argv[1], 5), 12);
}
*/
