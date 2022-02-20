int ft_recursive_power(int nb, int power)
{
	float pow;
	pow=1;
	if(power==0)
		return 1;
	else if(power>0)
	{
		pow=nb*ft_recursive_power(nb,power-1);
	}
	return pow;
}

#include <stdio.h>
int main(){printf("%d",ft_recursive_power(2,9));return 0;}
