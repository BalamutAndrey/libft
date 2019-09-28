/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:35:34 by eboris            #+#    #+#             */
/*   Updated: 2019/09/28 13:46:01 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_strsplit_words(char const *s, char c)
{
	int		i;
	int		n;
	int		m;

	i = 0;
	n = 0;
	m = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c) && (m == 1))
			m = 0;
		if ((m == 0) && (s[i] != c))
		{
			m = 1;
			n++;
		}
		i++;
	}
	return (n);
}

static int	ft_strsplit_len(char const *s, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while ((s[i] != c) && (s[i] != '\0'))
	{
		i++;
		len++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	int		m;
	int		words;
	char	**finish;

	m = 0;
	words = ft_strsplit_words(s, c);
	finish = (char **)malloc((words + 1) * sizeof(char *));
	if (finish == NULL)
		return (NULL);
	while (words--)
	{
		while ((*s == c) && (*s != '\0'))
			s++;
		finish[m] = ft_strsub(s, 0, ft_strsplit_len(s, c));
		if (finish[m] == NULL)
			return (NULL);
		s = s + ft_strsplit_len(s, c);
		m++;
	}
	finish[m] = NULL;
	return (finish);
}
