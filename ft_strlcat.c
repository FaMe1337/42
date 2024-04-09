/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:32:27 by famendes          #+#    #+#             */
/*   Updated: 2024/04/09 19:34:27 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char*dst, const char*src, size_t size)
{
	unsigned int	j;
	unsigned int	lenght;

	j = 0;
	lenght = ft_strlen(dst);
	if (size <= lenght)
		return (siz	e + ft_strlen(src));
	while (src[j] && lenght < size - 1)
	{
		dest[lenght] = src[j];
		lenght++;
		j++;
	}
	dest[lenght] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}
