#include <unistd.h>

int     ft_strlen(char *str)
{
    int     i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

void baseconwr(int nbr,char *base)
{
	int rem;
	if(nbr!=0){
	rem=nbr%(ft_strlen(base));
	nbr=nbr/(ft_strlen(base));
	baseconwr(nbr,base);
	write(1,&base[rem],1);
	}
	return ;
}

int checkflag(char *base)
{
	int i;
	i=0;
	while(base[i]!='\0')
	{
			if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
				return (0);
			i++;
	}
	if(i<=0)
		return 0;
	return 1;
}



void ft_putnbr_base(int nbr, char *base)
{
	if(nbr<0)
	{
		write(1,"-",1);
		nbr=-nbr;
	}
	if(checkflag(base)!=0)
	{
		baseconwr(nbr,base);
	}
}
#include <stdio.h>

int main()
{
	ft_putnbr_base(435874,"0123456789");
	return 0;
}
