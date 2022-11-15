/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:07:51 by marcela           #+#    #+#             */
/*   Updated: 2022/11/15 22:14:15 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_len_ptr(uintptr_t num) //tipo que faz com que eu possa trabalhar com o ponteiro como um inteiro
{
	size_t  len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16; //divido por 16 para achar em hexa
	}
	return (len);
}

void    ft_put_ptr(uintptr_t ptr)
{
	if (ptr >= 16) //se o número for maior que 16 tenho que trabalhar com as casas decimais uma a uma pq hexa vai de 0 a 15
	{
		ft_put_ptr(ptr / 16);
		ft_put_ptr(ptr % 16);
	}
	else 
	{
		if (ptr <= 9) //se for menor que 9 só achar na tabela ascii
			ft_putchar_fd((ptr + 48), 1);
		else //entre 10 e 16 os numeros são representados cono letras 
			ft_putchar_fd((ptr - 10 + 'a'), 1);
	}
}

int ft_print_ptr(unsigned long long ptr)
{
	int length;

	length = 0;
	length += write(1, "0x", 2); //e um endereco de memoria 
	if (ptr == 0)
		length += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		length += ft_len_ptr(ptr);
	} 
	return (length);
}