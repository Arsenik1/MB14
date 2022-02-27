
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

char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
	int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
#include <stdio.h>

#include <string.h>

int main()
{
	char ilk[]="Hello";
	char iki[]="Merhaba";
	ft_strncat(ilk,iki,4);
	//strncat(ilk,iki,4);
	printf("%s",ilk);
return 0;
}
