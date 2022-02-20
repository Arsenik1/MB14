
#include <stdio.h> 

int ft_fibonacci(int index)
{
	int sum;
	int sumplus;
	sum=0;
	if(index<0)
		return -1;
	else if(index>0){
		sumplus=sum+ft_fibonacci(--index);
	printf("%d\n",sum);
	return sumplus;
	}

}
int main(){printf("%d",ft_fibonacci(8));return 0;}
