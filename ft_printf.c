/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:01:40 by marcela           #+#    #+#             */
/*   Updated: 2022/11/14 20:56:25 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int ft_format(va_list args, const char format)
{
	int length;

	length = 0;
	if (format == 'c')
		length += ft_print_chr(va_arg(args, int));
	else if (format == 's')
		length += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		length += ft_print_num(va_arg(args, int));
	else if (format == 'u')
		length += ft_print_unsigned();
	else if (format == 'x' || format == 'X')
		length += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		length += ft_print_chr('%', 1);
	return 	(length);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	va_list	args;
	int	length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			length += ft_format(args, str[i + 1]);
			i++;
		}
		else 
			length += ft_print_chr(str[i], 1);
		i++;
	}
	va_end(args);
	return 	(length);
}

int main()
{
    int c;

    printf("\n%d\n", ft_printf("ag %c %s %p %d %i %u sdasd", 'a',"rodrigo" , &c, 14 , 16, 1123456789));
    printf("\n%d", printf("ag %c %s %p %d %i %u sdasd", 'a',"rodrigo", &c , 14 , 16, 1123456789));
    return 0;
}
