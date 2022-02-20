int ft_strcmp(char *s1, char *s2)
{
	int i;
	i=0;
	while(s1[i]!='\0'&&s2[i]!='\0')
	{
		if(s1[i]!=s2[i])
			return (s1[i]-s2[i]);
		i++;
	}
	if(s1[i]=='\0' || s2[i]=='\0')
		return (s1[i]-s2[i]);

	return 0;
}
#include <stdio.h>
int main()
{
	char ilk[]="Oerhaaba";
	char iki[]="Oerhaab";
	int a=ft_strcmp(ilk, iki);
	printf("%d\n",a);
	return 0;
}
