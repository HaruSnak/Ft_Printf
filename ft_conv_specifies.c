/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_specifies.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmoreno <shmoreno@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:54:11 by shmoreno          #+#    #+#             */
/*   Updated: 2024/01/08 19:07:17 by shmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conv_char(va_list ac)
{
	char	c;

	c = va_arg(ac, int);
	return (write(1, &c, 1));
}

int	ft_conv_string(va_list cv)
{
	char	*str;
	size_t	i;

	i = 0;
	str = va_arg(cv, char *);
	if (!str)
		write(1, "(null)\n", 7);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_conv_pointer(va_list cp)
{
	void	*ptr;

	ptr = va_arg(cp, void *);
	return (0);
}