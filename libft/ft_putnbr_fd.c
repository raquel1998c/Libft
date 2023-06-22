/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:53:52 by ade-mato          #+#    #+#             */
/*   Updated: 2023/06/22 21:44:26 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	char			nc;

	nb = n;
	if (n < 0)
	{
		nb = -n;
		write(fd, "-", 1);
	}
	if (nb < 10)
	{
		nc = nb + '0';
		write(fd, &nc, 1);
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		nc = nb % 10 + '0';
		write(fd, &nc, 1);
	}
}
