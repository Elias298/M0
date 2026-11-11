/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:14:44 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/11 14:14:49 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*buf;
	size_t			i;

	buf = (unsigned char *) s;
	i = 0;
	while (i < n)
		buf[i++] = 0;
	return (s);
}
/*
#include <unistd.h>
int main()
{
	char buf[12] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	write(1, (char*) ft_bzero(buf, 7), 12);

}
*/
