/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:01:40 by marcela           #+#    #+#             */
/*   Updated: 2022/11/03 23:52:41 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_format(va_list args, const char format)
{
	int lenght;

	lenght = 0;
	if (format == 'c')
		lenght += ft_putchar_fd(va_arg(args, int), 1);
	else if (format == 's')
		lenght += ft_putstr_fd(va_arg(args, char *));
	else if (format == 'p')
		lenght += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		lenght += ft_putnbr_fd(va_arg(args, int));
	else if (format == 'u')
		lenght += ft_print_unsigned();
	else if (format == 'x' || format == 'X')
		lenght += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		lenght += ft_putchar_fd('%', 1);
	return (lenght);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	va_list	args;
	int	lenght;

	i = 0;
	lenght = 0;
	va_start(args, str);

	while (str[i])
	{
		//if (str[i] == '%')

	}
	va_end(args);
	return (lenght);
}

int	main(void)
{
	printf("marcela %s juninho", "plays");
}
