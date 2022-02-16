#include <stdio.h>
void	devaminikontrolet(char *str, int i)
{
	int	a;

	a = 0;
	if ((str[i - 1] <= 90 && str[i - 1] >= 65) == 1)
		a++;
	if ((str[i - 1] <= 57 && str[i - 1] >= 48) == 1)
		a++;
	if ((str[i - 1] <= 122 && str[i - 1] >= 97) == 1)
		a++;
	if (a > 0)
		str[i] = str[i] + 32;
}

char	ft_strlowcase(char *str)
{
	int	i;

	if (str[0] <= 122 && str[0] >= 97)
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] <= 90 && str[i] >= 65))
			devaminikontrolet(str, i);
		else if (str[i + 1] <= 122 && str[i + 1] >= 97)
		{
			if ((str[i] <= 57 && str[i] >= 48) == 0)
				if ((str[i] <= 122 && str[i] >= 97) == 0)
					str[i + 1] = str[i + 1] - 32;
			i++;
		}
		i++;
	}
	return (*str);
}

int	main(void)
{
	char	str[]="hAYat ,qiSa 23Kele23beqler Ucuyo";
	int		i;

	i = 0;
	*str = ft_strlowcase(str);
	while (i < 32)
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}
