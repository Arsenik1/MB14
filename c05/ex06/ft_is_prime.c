int ft_is_prime(int nb)
{
	int i;
	int count;

	i = 2;
	count = 0;
	while (i <= nb / 2)
	{
		if(nb % i == 0)
		{
			count++;
		}
		i++;
	}
	if (count >= 1 || nb==0 || nb==1)
		return (0);
else
	{
		return (1);
	}
}

#include <stdio.h>
int main(){printf("%d",ft_is_prime(9));return 0;}

