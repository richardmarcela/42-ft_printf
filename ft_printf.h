/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <mrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:06:25 by mrichard          #+#    #+#             */
/*   Updated: 2022/11/04 22:10:15 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>

int     ft_format(va_list args, const char format);
int     ft_print_ptr(unsigned long long ptr);
int     ft_len(uintptr_t num);
int     ft_print_hex(unsigned int num, const char format);
void	ft_put_hex(unsigned int num, const char format);
void    ft_put_ptr(uintptr_t ptr);

#endif