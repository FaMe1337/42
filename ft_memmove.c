/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:54:55 by famendes          #+#    #+#             */
/*   Updated: 2024/04/15 16:30:33 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void*dest, const void*src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;
	size_t			j; 

	d = dest;
	s = (unsigned char *)src;
	i = 0;
	j = i;
	if (!src && !dest)
		return (NULL);
	if (s < d)
		while (n-- > 0)
			d[n] = s[n];
	else 
		while (i < n)
			d[i++] = s[j++];
	return (dest);
}
