/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:14:44 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/11 14:00:49 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*buf;
	unsigned char	b;
	size_t			i;

	buf = (unsigned char *) s;
	b = (unsigned char) c;
	i = 0;
	while (i < n)
		buf[i++] = b;
	return (s);
}
/*
#include <unistd.h>
int main()
{
	char buf[12] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	write(1, (char*) ft_memset(buf, 'a', 7), 12);

}
*/
