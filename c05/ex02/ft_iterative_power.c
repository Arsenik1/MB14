int ft_iterative_power(int nb, int power)
{
	int pow;
	pow=1;
	if(power==0)
		return 1;
	else if(power>0)
	{
		while(power>0){
		pow=nb*pow;
		power--;
		}	
	}
	else{
	return 0;}
}

#include <stdio.h>

int main(){
	printf("%d",ft_iterative_power(0,2));
	return 0;}
