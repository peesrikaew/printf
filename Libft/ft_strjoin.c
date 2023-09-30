/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndod <ndod@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 23:45:16 by ndod              #+#    #+#             */
/*   Updated: 2023/09/03 23:45:56 by ndod             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fs;
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	fs = (char *)malloc(((s1_len + s2_len + 1) * sizeof(char)));
	if (!fs)
		return (0);
	while (*s1)
	{
		fs[i] = *s1++;
		i++;
	}
	while (*s2)
	{
		fs[i] = *s2++;
		i++;
	}
	fs[i] = '\0';
	return (fs);
}
