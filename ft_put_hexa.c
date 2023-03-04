/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:41:10 by afatir            #+#    #+#             */
/*   Updated: 2022/11/15 17:23:30 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hexa(unsigned int n, char *s)
{
	int		ln;

	ln = 0;
	if (n >= 16)
		ln += ft_put_hexa(n / 16, s);
	if (n > 9)
		ln += ft_putchar(s[n % 16]);
	if (n < 10)
		ln += ft_putchar(n + 48);
	return (ln);
}
