/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:04:20 by famendes          #+#    #+#             */
/*   Updated: 2024/04/13 18:45:09 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int	ft_atoi(const char *nptr);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper (int c);
int	ft_tolower (int c);
char	*strchr(const char *s, int c);
int		ft_strncmp(const char*s1, const char*s2, size_t n);
void	*ft_memset(void*s, int c, size_t n);
void	*ft_memcpy(void*dest, const void*src, size_t n);
void	*ft_memmove(void*dest, const void*src, size_t n);
void	ft_bzero(void*s, size_t n);
size_t	ft_strlcpy(char*dst, const char*src, size_t size);
size_t	ft_strlcat(char*dst, const char*src, size_t size);
size_t	ft_strlen(const char*s);

#endif
