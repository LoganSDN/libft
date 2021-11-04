/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:19:32 by lsidan            #+#    #+#             */
/*   Updated: 2021/11/04 14:24:08 by lsidan           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_bzero(void	*s, int n);
void	*ft_calloc(size_t elementCount, size_t elementSize);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, unsigned long n);
void	*ft_memcpy(void *dst, void *src, size_t n);
void	*ft_memmove(void *dst, void *src, size_t len);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize);
int		ft_strlen(const char	*str);
char	*ft_strnstr(const char *haystack, const char *needle, \
		unsigned long len);
char	*ft_strrchr(const char *s, int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(const char	*s1, const char *s2, size_t n);

#endif