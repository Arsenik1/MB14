/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragol <skaragol@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 00:41:48 by skaragol          #+#    #+#             */
/*   Updated: 2022/02/27 10:21:56 by skaragol         ###   ########.fr       */
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

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*ptr;

	ptr = str;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
			write(1, &str[i], 1);
		else if (str[i] < 32)
		{
			ptr = hex(str[i]);
			write(1, ptr, 3);
		}
		i++;
	}
}
