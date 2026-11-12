/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 03:19:51 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/11 23:59:09 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		res;
	int		sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\f' || *str == '\r'
		|| *str == '\t' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		res = res * 10 + sign * (*str++ - '0');
	return (res);
}
/*
#include <stdio.h>
int main(int argc, char **argv){
	(void) argc;
	int i = ft_atoi(argv[1]);
	printf("%d\n", i);
}
*/
