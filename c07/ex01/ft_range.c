#include <stdlib.h>

int *ft_range(int min, int max)
{
	int size;
	int *arr;
	int i;
	i=1;
	size=max-min;
	arr=(int *)malloc(sizeof(int)*size+1);

	if(size<=0)
	{
		*arr=0;
		return arr;
	}
	while(i<=size)
	{
		arr[i-1]=min+i-1;
		i++;
	}

	return arr;
}

#include <stdio.h>
int main(){
	int *arr=ft_range(2,8);
	printf("%d",arr[6]);
	return 0;
}

