/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:17:02 by victor            #+#    #+#             */
/*   Updated: 2023/10/20 12:27:55 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				a;
	int				i;
	char			*str;

	i = 0;
	a = -1;
	if (!s)
		return (0);
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			a = i;
		i++;
	}
	if (str[i] == (unsigned char)c)
		a = i;
	if (a == -1)
		return (0);
	else
		return (&str[a]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s = "kayakydaabjjskjis";
	printf("%s : %s", strrchr(s, 'z'), ft_strrchr(s, 'z'));
}*/