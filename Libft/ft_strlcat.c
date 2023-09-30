/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndod <ndod@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:53:37 by ndod              #+#    #+#             */
/*   Updated: 2023/09/05 18:35:12 by ndod             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dt_len;

	if (!size)
		return (ft_strlen(src));
	dt_len = ft_strlen(dst);
	if (dt_len > size)
		return (ft_strlen(src) + size);
	while (*src && dt_len < size - 1)
	{
		dst[dt_len] = *src++;
		dt_len++;
	}
	dst[dt_len] = '\0';
	return (ft_strlen(src) + ft_strlen(dst));
}
