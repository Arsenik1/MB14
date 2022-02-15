#include <unistd.h>

 void ft_print_reverse_alphabet(void)
{
 char a = 'z';
 int i = 25;
 	while (i>=0)
 	{
 		write(1, &a, 1);
		i--;
		a--;
 	}
}

int main(){
	ft_print_reverse_alphabet();
	return 0;
}
