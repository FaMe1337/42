/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:53:03 by famendes          #+#    #+#             */
/*   Updated: 2024/04/13 19:18:50 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char*s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] && (s[i] != c)) 
		i++;
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}
