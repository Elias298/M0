/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:14:44 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/11 15:28:03 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*csrc;
	unsigned char		*cdest;
	size_t				i;

	csrc = (const unsigned char *) src;
	cdest = (unsigned char *) dest;
	if (cdest < csrc)
	{
		i = 0;
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	else if (csrc < cdest)
	{
		i = n - 1;
		while (i != (size_t) - 1)
		{
			cdest[i] = csrc[i];
			i--;
		}
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
