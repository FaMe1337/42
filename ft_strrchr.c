/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 19:21:44 by famendes          #+#    #+#             */
/*   Updated: 2024/04/13 19:31:39 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	length;

	length = ft_strlen(s) + 1;
	while (length > 0 && length != c)
		length--;
	if (length == c)
		return ((char *)s + length);
	return (NULL);
}