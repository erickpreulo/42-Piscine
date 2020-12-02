/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:32:38 by egomes            #+#    #+#             */
/*   Updated: 2020/12/01 16:42:35 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	while (str[0] != '\0')
	{
		if (str[0] >= 'A' && str[0] <= 'Z')
			str[0] += 32;
		str++;
	}
	return (str);
}