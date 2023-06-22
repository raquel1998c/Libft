/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:54:45 by ade-mato          #+#    #+#             */
/*   Updated: 2023/06/22 21:44:35 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_alloc_word(char const *s, char c)
{
	char	*word;
	int		len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_memcpy(word, s, len);
	word[len] = '\0';
	return (word);
}

int	ft_count_words(char const *s, char c)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 0;
	while (*s)
	{
		if (*s == c)
			is_word = 0;
		else if (!is_word)
		{
			is_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words_count;
	int		i;

	if (!s)
		return (NULL);
	words_count = ft_count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			split[i++] = ft_alloc_word(s, c);
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}
