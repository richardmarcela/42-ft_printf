/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:07:44 by marcela           #+#    #+#             */
/*   Updated: 2022/11/03 23:50:51 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16) //base hex acaba no 16
	{
		ft_put_hex(num / 16, format); //trato digito por digito
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9) //menor q 9 continua sendo numero
			ft_putchar_fd((num + 48), 1);
		else //maior q 9 ate 15 sao letras
		{
			if (format == 'x') //letra minuscula
				ft_putchar_fd((num - 10 + 'a'), 1); 
			else if (format == 'X') //letra maiuscula
				ft_putchar_fd((num - 10 + 'A'), 1); 
		}
	}
}

int ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
	return (ft_len(num));
}