
#include <stdio.h> 

int ft_fibonacci(int index)
{
	int sum;
	if(index<0)
		return -1;
	else if(index==1)
		return 1;
	else if(index==0)
		return 0;
	else if(index>1){
		sum=ft_fibonacci(index-1)+ft_fibonacci(index-2);
	
	return sum;
	}

}
int main(){printf("%d",ft_fibonacci(8));return 0;}
