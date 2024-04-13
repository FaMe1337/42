/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:40:45 by famendes          #+#    #+#             */
/*   Updated: 2024/04/13 16:43:37 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void*dest, const void*src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *) dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*  int  main(void)
{
    char c3[] = "21312as";
	char c4[20];
    char c5[20];
    memcpy (c4, c3, 13);
    printf ("%s\n", c4);
    ft_memcpy (c5, c3, 13);
    printf ("%s\n", c5);
} */
