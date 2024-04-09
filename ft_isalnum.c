/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:51:18 by famendes          #+#    #+#             */
/*   Updated: 2024/04/09 19:01:24 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
	|| (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}