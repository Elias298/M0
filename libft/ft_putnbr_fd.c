/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 20:28:34 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/13 02:45:31 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	putnbr_fd_recur(int n, int fd)
{
	char	*nums;

	nums = "0123456789";
	if (n == 0)
		return ;
	putnbr_fd_recur(n / 10, fd);
	write(fd, nums - (n % 10), 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n > 0)
		n *= -1;
	else
		write(fd, "-", 1);
	putnbr_fd_recur(n, fd);
}
/*
#include <stdlib.h>
int main(int argc, char **argv)
{
	(void) argc;
	ft_putnbr_fd(atoi(argv[1]), 1);
	write(1, "\n", 1);
}
*/
