/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:37:23 by ade-mato          #+#    #+#             */
/*   Updated: 2023/06/22 21:43:46 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	chr;

	ptr = (unsigned char *)s;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*ptr == chr)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
