/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 01:36:40 by eboris            #+#    #+#             */
/*   Updated: 2019/09/12 03:17:28 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_atoi(char *str)
{
	int	i;
	int fin;

	i = 0;
	fin = 0;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		if (i == 0)
			fin = (str[i] - 48);
		else
			fin = (fin * 10) + (str[i] - 48);
		i++;
	}
	return (fin);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		fin;
	char	*s;
	int		minus;

	i = 0;
	s = (char *)str;
	minus = 1;
	while (((s[i] == '\x7f') || (s[i] == '\a') || (s[i] == '\b') ||
			(s[i] == '\t') || (s[i] == '\n') || (s[i] == '\v') ||
			(s[i] == '\f') || (s[i] == '\r') || (s[i] == '\x1b') ||
			(s[i] == ' ')) && (s[i] != '\e'))
	{
		i++;
	}
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	fin = ft_atoi_atoi(&s[i]);
	return (fin * minus);
}
