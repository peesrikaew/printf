/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndod <ndod@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:25:20 by ndod              #+#    #+#             */
/*   Updated: 2023/09/11 13:47:42 by ndod             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lit_len;
	size_t	check;

	if (!len && *little != 0)
		return (0);
	if (!*little)
		return ((char *)big);
	lit_len = ft_strlen(little);
	while (*big && len-- >= lit_len)
	{
		check = ft_strncmp(big, little, lit_len);
		if (*big == *little && !check)
			return ((char *)big);
		big++;
	}
	return (0);
}
