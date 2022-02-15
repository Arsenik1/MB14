#include <unistd.h>

 void ft_print_numbers(void)
{
	char a = '0';
	int i = 9;
	while (i >= 0)
	{
		write(1, &a, 1);
		i--;
		a++;
	}
}

int main(){
	ft_print_numbers();
	return 0;
}
