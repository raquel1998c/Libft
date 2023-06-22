/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:29:12 by ade-mato          #+#    #+#             */
/*   Updated: 2023/06/22 21:43:00 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void					*memory;

	memory = malloc(num_elements * element_size);
	if (!memory)
		return (NULL);
	ft_memset(memory, 0, num_elements * element_size);
	return (memory);
}
