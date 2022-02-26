#include <unistd.h>

void    ft_sort_int_tab(char *tab, int size)
{
        int     count;
        int     i;
        int     temp;

        i = 0;
        count = 1;
        while (count != 0)
        {
                i = 0;
                count = 0;
                while (i != size - 1)
                {
                        if (tab[i] > tab[i + 1])
                        {
                                temp = tab[i];
                                tab[i] = tab[i + 1];
                                tab[i + 1] = temp;
                                count++;
                        }
                        i++;
                }
        }
	i=0;
	while(i<size)
		write(1,&tab[i++],1);
}

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
	int i=0;
	int ar=argc+1;
	int len;
	while(ar-argc!=ar-1)
	{
		len=ft_strlen(argv[ar-argc]);
		ft_sort_int_tab(argv[ar-argc],len);
		write(1,"\n",1);
		argc--;
	}
	return 0;
}
