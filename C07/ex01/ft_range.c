/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayesily <yayesily@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:12:17 by yayesily          #+#    #+#             */
/*   Updated: 2024/02/15 19:12:25 by yayesily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	i;
	int	*place;

	i = 0;
	count = max - min;
	place = malloc(sizeof(int) * count);
	if (min >= max)
		return (NULL);
	while (i < count)
	{
		place[i] = min + i;
		i++;
	}
	return (place);
}
