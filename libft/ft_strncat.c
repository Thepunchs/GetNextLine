/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:35:17 by alefebvr          #+#    #+#             */
/*   Updated: 2017/11/16 18:51:47 by alefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	while (n > 0 && s2[j] != '\0')
	{
		s1[i] = s2[j];
		j++;
		i++;
		n--;
	}
	s1[i] = '\0';
	return (s1);
}
