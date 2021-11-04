/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:18:21 by lsidan            #+#    #+#             */
/*   Updated: 2021/11/04 15:14:31 by lsidan           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t				i;
	unsigned char		*s1;
	unsigned char		*s2;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	s1 = (unsigned char *) dst;
	s2 = (unsigned char *) src;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
