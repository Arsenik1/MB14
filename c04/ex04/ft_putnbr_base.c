int checkflag(char *base);
int ft_strlen(char *src);
int revnbr(int nbr);
int *basecon(int nbr,int base);

void ft_putnbr_base(int nbr, char *base);
{
	if(nbr<0)
	{
		write(1,"-",1);
		nbr=-nbr;
	}
	int bas;
	int *arr;
	*arr=basecon(nbr,base);
	bas=ft_strlen(base);
	if(checkflag(base)!=0)
	{	
		while(arr[200]!=0)
		{
			write(1,&arr[arr[200]],1);
		}
	}
}

int *basecon(int nbr,int base)
{
	int quo;
	int rem;
	int arr[255];
	arr[200]=0;
	quo=nbr;

	while(quo!=0)
	{
		rem=quo%base;
		quo=quo/base;
		arr[arr[200]]=rem;
		arr[200]++;
	}

	return arr;
}

int revnbr(int nbr,int bas)
{
	int temp;
	temp=0;
	while(nbr!=0)
	{
		temp=temp+(nbr%bas);
		nbr=nbr/bas;
	}
	return temp;
}

int checkflag(char *base)
{
	int i;
	i=0;
	while(base[i]!=\0) //0=err 1=bin 2=dec 3=hex 4=oct
	{
		if(base[i]==)
			if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
				return (0);
	}
	if(i<=0)
		return 0;
	return 1;
}

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

