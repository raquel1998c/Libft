/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:36:51 by ade-mato          #+#    #+#             */
/*   Updated: 2023/06/22 21:43:39 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_length(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	ft_itoa_recursive(int n, char *result, int *index)
{
	if (n == 0)
		return ;
	ft_itoa_recursive(n / 10, result, index);
	result[(*index)++] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	int		len;
	int		is_negative;
	int		index;
	char	*result;

	index = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_int_length(n);
	is_negative = n < 0;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (is_negative)
	{
		n = -n;
		result[0] = '-';
		index = 1;
	}
	result[len] = '\0';
	if (n == 0)
		result[index] = '0';
	else
		ft_itoa_recursive(n, result, &index);
	return (result);
}
