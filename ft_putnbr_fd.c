/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:42:53 by famendes          #+#    #+#             */
/*   Updated: 2024/04/22 17:59:26 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nl;
	int		i;
	char	s[10];

	nl = n;
	i = 0;
	if (nl == 0)
	{
		write (fd, "0", 1);
		return ;
	}
	if (nl < 0)
	{
		write(fd, "-", 1);
		nl *= -1;
	}
	while (nl)
	{
		s[i++] = (nl % 10) + 48;
		nl /= 10;
	}
	while (i > 0)
		write(fd, &s[--i], 1);
}
