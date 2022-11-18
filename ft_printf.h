/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <mrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:06:25 by mrichard          #+#    #+#             */
/*   Updated: 2022/11/18 16:19:55 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include <limits.h>

int		ft_format(va_list args, const char format);
int		ft_print_ptr(unsigned long long ptr);
int		ft_len_ptr(uintptr_t num);
int		ft_print_hex(unsigned int num, const char format);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned int num);
void	ft_put_ptr(uintptr_t ptr);
int		ft_print_str(char *str);
int		ft_print_chr(int c);
void	ft_putstr(char *str);
int		ft_print_num(int n);
char	*ft_uitoa(unsigned int n);
int		ft_print_unsigned(unsigned int n);
int		ft_printf(const char *str, ...);

#endif
