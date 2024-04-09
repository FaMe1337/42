/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:23:12 by famendes          #+#    #+#             */
/*   Updated: 2024/04/09 18:47:55 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z') 
	|| (c >= 'A' && c <= 'Z')
	return (1);

	return (0);
}