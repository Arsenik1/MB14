#include <unistd.h>

void ft_print_alphabet(void)
{
	char a = 'a';
	int i = 0;
	while (i < 26){
		write(1, &a, 1);
		i++;
		a++;
	}
 }

int main()
{
	ft_print_alphabet();
	return 0;
}
