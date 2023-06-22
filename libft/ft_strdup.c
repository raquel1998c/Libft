/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:55:47 by ade-mato          #+#    #+#             */
/*   Updated: 2023/06/22 21:44:44 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	string_length;
	char	*duplicated_string;

	string_length = ft_strlen(s);
	duplicated_string = (char *) malloc(string_length + 1);
	if (!duplicated_string)
		return (NULL);
	ft_memcpy(duplicated_string, s, string_length + 1);
	return (duplicated_string);
}
