/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:54:49 by amiguel-          #+#    #+#             */
/*   Updated: 2023/10/09 18:22:00 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_words(char const *s, char c)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			result++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (result);
}

static char	**free_arr(char **p, int i)
{
	while (i > 0)
	{
		i--;
		free(p[i]);
	}
	free(p);
	return (0);
}

static char	*putword(char *word, char const *s, int i, int w_len)
{
	int	j;

	j = 0;
	while (w_len > 0)
	{
		word[j] = s[i - w_len];
		j++;
		w_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**split_word(char const *s, char c, char **split, int words)
{
	int	i;
	int	num_words;
	int	w_len;

	i = 0;
	num_words = 0;
	w_len = 0;
	while (num_words < words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			w_len++;
		}
		split[num_words] = (char *)malloc(sizeof(char) * (w_len + 1));
		if (!split[num_words])
			return (free_arr(split, num_words));
		putword(split[num_words], s, i, w_len);
		w_len = 0;
		num_words++;
	}
	split[num_words] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	unsigned int	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words +1));
	if (!split)
		return (NULL);
	split = split_word(s, c, split, words);
	return (split);
}
