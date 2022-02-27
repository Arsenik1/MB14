/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragol <skaragol@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 00:41:48 by skaragol          #+#    #+#             */
/*   Updated: 2022/02/27 04:04:28 by skaragol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	g_sayi[4];

char	*hex(int a)
{
	int	i;
	int	rem;

	g_sayi[0] = '\\';
	g_sayi[1] = '0';
	i = 0;
	rem = a % 16;
	if (rem < 10)
		g_sayi[2] = rem + 48;
	else if (a < 16)
		g_sayi[2] = rem + 87;
	else
	{
		a = a / 16;
		g_sayi[1] = '1';
		if (a < 10)
			g_sayi[2] = a + 48;
		else
			g_sayi[2] = a + 87;
	}
	return (&g_sayi[0]);
}
