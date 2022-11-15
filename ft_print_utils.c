/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:26:06 by marcela           #+#    #+#             */
/*   Updated: 2022/11/14 20:44:58 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int ft_printstr(char *str)
{
    int i;

    i = 0;
    if (str == NULL)
    {
        ft_putstr("(null)");
        return (6);
    }
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int     ft_printnbr(int n)
{
    int     len;
    char    *num;

    len = 0;
    num = ft_itoa(n);
    len = ft_printstr(num);
    free 
}