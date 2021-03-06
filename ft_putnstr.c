/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 18:36:04 by eboris            #+#    #+#             */
/*   Updated: 2019/10/05 18:39:15 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnstr(char const *s, size_t size)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && i < size)
	{
		ft_putchar(s[i]);
		i++;
	}
}
