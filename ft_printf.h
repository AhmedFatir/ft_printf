/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:37:50 by afatir            #+#    #+#             */
/*   Updated: 2022/11/16 09:34:12 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_put_deci(int n);
int		ft_put_unsigned(unsigned int n);
int		ft_put_hexa(unsigned int n, char *s);
int		ft_put_ad(unsigned long p, char *s);
int		ft_printf(const char *s, ...);

#endif