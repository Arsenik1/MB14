#include <unistd.h>

char g_sayi[255];

void hex(int a)
{	int i;
	int rem;

	g_sayi[0]='\\';
	g_sayi[1]='0';
	i=0;
		rem=a%16;
		if(a<10)
		{
			g_sayi[2]=a+48;
		}
		else if (a < 16)
		{
			g_sayi[2]=a+87;
		} else
		{
			g_sayi[2]=1;
			a=a/16;
			if(a<10)
			{
				g_sayi[2]=a+48;
			}
			else if (a < 16)
			{
				g_sayi[2]=a+87;

			}

		}
}
void    ft_putstr(char *str)
{
    int i;
	int j;
    i = 0;
    while (str[i] != '\0')
    {	
		j=0;
		if(str[i]>=32&&str[i]<=127)
        write (1, &str[i], 1);
		else if(str[i]<32){
			hex(str[i]);
		while(j<3)
		{
			write(1,&g_sayi[i], 1);
			j++;
		}}
		i++;
		}

		}
    



int main()
{
	ft_putstr("Merhaba\nBenim");
	return 0;
}
