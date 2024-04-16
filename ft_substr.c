/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:29:18 by famendes          #+#    #+#             */
/*   Updated: 2024/04/16 18:40:08 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s) && !s && len > ft_strlen(s + start))
		return (NULL);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (len > 0)
	{
		str[i++] = s[start++];
		len--;
	}
	str[i] = '\0';
	return (str);
}
