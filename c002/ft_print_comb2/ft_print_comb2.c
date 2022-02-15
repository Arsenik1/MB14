/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragol <skaragol@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:38:28 by skaragol          #+#    #+#             */
/*   Updated: 2022/02/13 18:08:26 by skaragol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	print(char a, char b, char c, char d)
{
	if (a == c && b == d)
	{
		return ;
	}
	if (a <= c && b <= d)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (a != '9' || b != '8' || c != '9' || d != '9')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	char	sayi[4];

	sayi[4] = {'0', '0', '0', '1'};
	while (sayi[0] <= '9')
	{
		sayi[1] = '0';
		while (sayi[1] <= '9')
		{
			sayi[2] = '0';
			while (sayi[2] <= '9')
			{
				sayi[3] = '0';
				while (sayi[3] <= '9')
				{
					print(sayi[0], sayi[1], sayi[2], sayi[3]);
					sayi[3]++;
				}
				sayi[2]++;
			}
			sayi[1]++;
		}
		sayi[0]++;
	}
}
