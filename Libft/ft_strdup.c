/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndod <ndod@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:03:58 by ndod              #+#    #+#             */
/*   Updated: 2023/09/03 14:23:49 by ndod             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	n;
	size_t	i;

	i = 0;
	n = ft_strlen(s1);
	p = (char *)malloc((n + 1) * sizeof(char));
	if (!p)
		return (0);
	while (n--)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
