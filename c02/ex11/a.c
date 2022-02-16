#include <unistd.h>

int hex(int a)
{
	char sayi[3];
	int i;
	int rem;

	sayi[0]='\\';
	sayi[1]='0'
	i=0;
		rem=sayi%16
		if(rem<10)
		{
			sayi[3]=rem+48;
		}
		else
		{
			sayi[2]=rem+55;
		}
	}

	return ;
}

void    ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
		if(str[i]>=32&&str[i]<=127){
        write (1, &str[i], 1);
		else if(str[i]<32)
		{
		
		}
        i++;
		}
    }
}
