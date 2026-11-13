/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 20:28:34 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/13 02:38:49 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	itoa_recur(int nb, char *buf, int depth)
{
	char	*nums;
	int		end;

	nums = "0123456789";
	if (nb == 0)
		return (depth);
	end = itoa_recur(nb / 10, buf, depth + 1);
	buf[end - depth - 1] = nums[- (nb % 10)];
	return (end);
}

char	*ft_itoa(int nb)
{
	char	buf[12];

	ft_bzero(buf, 12);
	if (nb == 0)
	{
		buf[0] = '0';
		return (ft_strdup(buf));
	}
	if (nb > 0)
		itoa_recur(-nb, buf, 0);
	else
	{
		buf[0] = '-';
		itoa_recur(nb, buf + 1, 0);
	}
	return (ft_strdup(buf));
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv) {
	(void) argc;
	int n = atoi(argv[1]);
	char *res = ft_itoa(n);
	puts(res);
	free(res);
}
*/
