/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:44:49 by famendes          #+#    #+#             */
/*   Updated: 2024/04/16 16:37:53 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*temp;

	temp = malloc(nmemb * size);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < size * nmemb)
		temp[i++] = 0;
	return ((void *) temp);
}
