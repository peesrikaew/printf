/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndod <ndod@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:45:04 by ndod              #+#    #+#             */
/*   Updated: 2023/09/25 10:13:13 by ndod             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
#include "Libft/libft.h"

int	ft_printf(const	char *str, ...);
int	print_char(char c);
int	print_pointer(unsigned long value, int asc);
int	print_int(int n);
int	print_string(char *s);
int	print_pointer(unsigned long value, int asc);
int	print_unsigned(unsigned int nb);
int	print_hex(unsigned int value, int asc);

#endif