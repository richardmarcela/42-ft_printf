/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_strs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <mrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:13:46 by mrichard          #+#    #+#             */
/*   Updated: 2022/11/04 22:14:13 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int ft_print_str(char *s)
{
    return (write(1, s, ft_strlen(s)));
}

int ft_print_chr(char c)
{
    return (write(1, &c, 1));
}