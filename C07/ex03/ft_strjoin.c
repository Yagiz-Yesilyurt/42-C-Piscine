/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayesily <yayesily@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:21:53 by yayesily          #+#    #+#             */
/*   Updated: 2024/02/15 19:33:28 by yayesily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	result = malloc(sizeof(strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			result[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			result[k++] = sep[j++];
		i++;
	}
	result[k] = '\0';
	return (result);
}
