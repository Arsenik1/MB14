int ft_is_prime(int nb)
{
        int i;
        int count;

        i = 2;
        count = 0;
        while (i <= nb / 2)
        {
                if(nb % i == 0)
                {
                        count++;
                }
                i++;
        }
        if (count >= 1 || nb==0 || nb==1)
                return (0);
else
        {
                return (1);
        }
}


int ft_find_next_prime(int nb)
{
	while(ft_is_prime(nb)!=1){
		nb++;
	}
	return nb;
}

#include <stdio.h>
int main(){printf("%d",ft_find_next_prime(2));return 0;}

