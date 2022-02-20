#include <unistd.h>

<<<<<<< HEAD
char g_sayi[255];

void hex(int a)
{	int i;
	int rem;

	g_sayi[0]='\\';
	g_sayi[1]='0';
	i=0;
		rem=a%16;
		if(a<10)
=======
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
>>>>>>> f3dc6013bb4e91975c493cab521fc45d4ea64587
		{
			g_sayi[2]=a+48;
		}
		else if (a < 16)
		{
<<<<<<< HEAD
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
=======
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
>>>>>>> f3dc6013bb4e91975c493cab521fc45d4ea64587
		if(str[i]>=32&&str[i]<=127)
        write (1, &str[i], 1);
		else if(str[i]<32){
			hex(str[i]);
		while(j<3)
		{
<<<<<<< HEAD
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
=======
			ptr=hex(str[i]);
			write(1,ptr,3);
		}
        i++;
		
    }
>>>>>>> f3dc6013bb4e91975c493cab521fc45d4ea64587
}

int main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return 0;
}
