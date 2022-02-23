int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(-16));
	return (0);
}
