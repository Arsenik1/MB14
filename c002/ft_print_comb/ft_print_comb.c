/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragol <skaragol@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:10:29 by skaragol          #+#    #+#             */
/*   Updated: 2022/02/13 15:10:31 by skaragol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				print(a, b, c);
			}
			c++;
		}
		b++;
	}
	a++;
}

void	print(int a, int b, int c)
{
	if (b != a && b != c && a != c)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a != '7' || b != '8' || c != '9')
		{
			write(1, ", ", 1);
		}
	}
}
