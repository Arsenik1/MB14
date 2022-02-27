#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int             ft_strlen(char *str)
{
        int             i;
        i = 0;
        while (str[i] != '\0')
        {
                i++;
        }
        return (i);
}

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int a;

	i=0;

	while(str[i]!='\0')
	{
		j=0;
		a=0;
		while(to_find[j]!='\0')
		{
			if(str[i]==to_find[j]){
				a++;
			}else{
				i++;
			break;
			}

			if(a==ft_strlen(to_find))
				return &str[i-a+1];
			j++;
			i++;
		}
	}
	return ("null");
}

int main()
{
	char ilk[]="ben merhaba bbenim adim salih";
	char iki[]=("erh");

	char *a=ft_strstr(ilk,iki);
	printf("%s\n",a);
	return 0;
}
