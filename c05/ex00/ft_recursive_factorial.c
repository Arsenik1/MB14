int ft_recursive_factorial(int nb)
{
	int fact;
	fact=1;
	while(nb!=0)
	{
		fact=fact*nb;
		nb--;
	}
	return fact;
}
#include <stdio.h>

int main(){
	printf("%d",ft_recursive_factorial(5));
	return 0;}
