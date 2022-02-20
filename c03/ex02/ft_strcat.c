char *ft_strcat(char *dest, char *src)
{
	int len;
	int i;
	i=0;
	len = 0;
	while (dest[len]!='\0')
	{
		len++;
	}
	while(src[i]!='\0')
	{
		dest[len]=src[i];
		len++;
		i++;
	}
	dest[len]='\0';
	return dest;
}
#include <string.h>
#include <stdio.h>
int main()
{	
	char ilk[]="Yazi";
	char iki[]="EkleLan";
	//ft_strcat(ilk,iki);
	strcat(ilk,iki);
	printf("%s",ilk);
	return 0;
}
