/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:42:18 by ade-mato          #+#    #+#             */
/*   Updated: 2023/06/22 21:44:07 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*frase;
	unsigned char	*copia;
	int				i;
	int				num;

	if (!dest && !src)
		return (NULL);
	i = 0;
	num = (int) n;
	frase = (unsigned char *) src;
	copia = (unsigned char *) dest;
	if (dest > src)
	{
		i = (int) n;
		while (--i >= 0)
			copia[i] = frase[i];
		return ((void *) copia);
	}
	while (i < num)
	{
		copia[i] = frase[i];
		i++;
	}
	return ((void *) copia);
}
