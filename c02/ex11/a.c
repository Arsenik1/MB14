#include <unistd.h>

char sayi[3];

char *hex(int a)
{
	int i;
	int rem;

	sayi[0]='\\';
	sayi[1]='0';
	i=0;
		rem=a%16;
		if(rem<10)
		{
			sayi[3]=rem+48;
		}
		else
		{
			sayi[2]=rem+87;
			a=a/16;
			if(a<10){
			sayi[3]=a+48;
			}
			else
			{
				sayi[3]=a+87;
			}

		}
	return &sayi[0];
	}

void    ft_putstr_non_printable(char *str)
{
    int i;
    char *ptr=str;
    i = 0;
    while (str[i] != '\0')
    {
		if(str[i]>=32&&str[i]<=127)
        write (1, &str[i], 1);
		else if(str[i]<32)
		{
			ptr=hex(str[i]);
			write(1,ptr,3);
		}
        i++;
		
    }
}

int main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return 0;
}
