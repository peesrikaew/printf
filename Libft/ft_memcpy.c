/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndod <ndod@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:29:15 by tesrikae          #+#    #+#             */
/*   Updated: 2023/09/05 19:14:01 by ndod             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dt;
	const char	*sc;

	if (!dst && !src)
	{
		return (0);
	}
	dt = dst;
	sc = src;
	while (n--)
	{
		*dt = *sc;
		dt++;
		sc++;
	}
	return (dst);
}
