/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 01:03:35 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/12 12:19:23 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
#include <unistd.h>
int main(int argc, char** argv)
{
	(void) argc;
	(void) argv;
	write(1, "01" + ft_isalnum(argv[1][0]), 1);
	write(1, "\n", 1);
}
*/
