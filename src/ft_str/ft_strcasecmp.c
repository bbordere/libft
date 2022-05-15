/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:39:15 by bbordere          #+#    #+#             */
/*   Updated: 2022/05/15 14:39:15 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcasecmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i]
		&& ft_tolower(s1[i]) == ft_tolower(s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
