/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayesily <yayesily@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:57:05 by yayesily          #+#    #+#             */
/*   Updated: 2024/02/03 23:18:46 by yayesily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char i, char j, char k)
{
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					write(1, &i, 1);
					write(1, &j, 1);
					write(1, &k, 1);
					if (i != '7')
						write(1, ", ", 2);
				}
				k++;
			}
			k = '2';
			j++;
		}
		j = '1';
		i++;
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	j = '1';
	k = '2';
	ft_print(i, j, k);
}
