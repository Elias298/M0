/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 01:03:35 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/10 20:08:24 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (('0' <= c) && (c <= '9'))
		return (1);
	return (0);
}
/*
#include <unistd.h>
int main(int argc, char** argv)
{
	(void) argc;
	(void) argv;
	write(1, "01" + ft_isdigit(argv[1][0]), 1);
	write(1, "\n", 1);
}
*/
