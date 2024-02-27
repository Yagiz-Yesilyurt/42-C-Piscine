/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayesily <yayesily@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:45:21 by yayesily          #+#    #+#             */
/*   Updated: 2024/02/08 21:47:44 by yayesily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_char_printable(char c)
{
	if (c >= 32)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = str[i];
		if (ft_is_char_printable(j))
			ft_putchar(j);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[j / 16]);
			ft_putchar("0123456789abcdef"[j % 16]);
		}
		i++;
	}
}
