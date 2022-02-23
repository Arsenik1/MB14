#include <unistd.h>

int     ft_strlen(char *str)
{
        int             i;

        i = 0;
        while (str[i] != '\0')
        {
                i++;
        }
        return (i);
}

int main(int argc, char **argv)
{
	int i;

	i=0;
	while(argc-1!=0)
	{
		i=ft_strlen(argv[argc-1]);
		while(i>=0)
		{
			write(1, &argv[argc-1][i], 1);
			i--;
		}
		write(1,"\n",1);
		argc--;
	}
	return 0;
}
