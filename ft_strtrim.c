/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuokka <vkuokka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:17:28 by vkuokka           #+#    #+#             */
/*   Updated: 2019/11/05 15:43:06 by vkuokka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;

	if (!s)
		return (NULL);
	start = 0;
	while (ft_iswhitespace(s[start]) && s[start])
		start++;
	if (s[start] == '\0')
		return (ft_strnew(0));
	end = ft_strlen(s);
	while (ft_iswhitespace(s[end - 1]))
		end--;
	if (start == end)
		return (ft_strnew(0));
	return (ft_strsub(s, (unsigned int)start, end - start));
}
