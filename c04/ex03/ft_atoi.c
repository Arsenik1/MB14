int becomenb(int nb, char c)
{
	nb=nb*10;
	nb=nb+c-48;
	return nb;
}

int ft_atoi(char *str)
{
	int i;
	int nb;
	int sign;

	sign=1;
	nb=0;
	i=0;
	while(str[i]==' ' ||str[i]=='\t' ||str[i]=='\r' ||str[i]=='\v')
		i++;
	while(str[i]=='+'||str[i]=='-')
	{
		if(str[i]=='-')
			sign=sign*(-1);
		i++;
	}
	while(str[i]>='0'&&str[i]<='9')
	{
		nb=becomenb(nb, str[i]);
		if(str[i+1]<'0'||str[i+1]>'9')
			nb=sign*nb;
		i++;
	}
	return nb;
}
#include <stdio.h>
int main()
{
	printf("%d",ft_atoi("   		--++324as123"));
	return 0;
}
