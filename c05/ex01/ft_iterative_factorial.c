int ft_iterative_factorial(int nb)
{
	int fac;
	fac=1;
	if(nb-1!=0)
		fac=nb*ft_iterative_factorial(nb-1);
	return fac;
	
}
#include <stdio.h>
int main()
{
	int a=ft_iterative_factorial(4);
	printf("%d",a);
	return 0;
}

