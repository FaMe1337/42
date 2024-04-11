/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:40:45 by famendes          #+#    #+#             */
/*   Updated: 2024/04/11 19:53:35 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void*dest, const void*src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (s[i] && n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char c1[] = "ola tudo bem";
	char c2[20];
	char c3[20];
	memcpy (c2, c1, 13);
	printf ("%s\n", c2);
	ft_memcpy (c3, c1, 13);
	printf ("%s\n", c3);
} */