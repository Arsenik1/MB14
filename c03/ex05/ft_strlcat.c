unsigned int g_dst_len;

unsigned int             ft_strlen(char *str)
{
        int             i;
        i = 0;
        while (str[i] != '\0')
        {
                i++;
        }
        return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
        unsigned int     i;
	unsigned int src_len;

	src_len=ft_strlen(src);
       	i = 0;
	g_dst_len=ft_strlen(dest);
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(dest));
       
	while(src_len!=0&&i!=size)
       {
		dest[i+g_dst_len]=src[i];
		i++;
		
       }

	dest[size]='\0';
        return (ft_strlen(dest)+i);
}
#include <stdio.h>

#include <string.h>

int main()
{
        char ilk[30];
	ilk[0]='H';
	ilk[1]='e';
	ilk[2]='l';
	ilk[3]='l';
	ilk[4]='o';
	ilk[5]='\0';
        char iki[8]="Merhaba";
        int a=ft_strlcat(ilk,iki,30);
        //strncat(ilk,iki,4);
        printf("%s %d\n",ilk,a);
return 0;
}
