#include <stdlib.h>

char *ft_strdup(char *src)
{
	int len;
	int i;
	i=0;
	len=0;
	while(src[len]!='\0')
		len++;
	char *ptr=(char *)malloc(sizeof(char)*len+1);

	while(len>=0)
	{
		ptr[len]=src[len];
		len--;
	}
	return ptr;
}

#include <stdio.h>
int main(){printf("%s",ft_strdup("Merhaba len \n"));return 0;}

