#include <unistd.h>
int main(int argc, char **argv)
{
	int i;
	int ar;

	ar=argc+1;
	argv[argc+1][0]='\0';
	i=0;
	while(argc>1)
	{
		i=0;
		while(argv[ar-argc][i]!='\0'){
		write(1,&argv[ar-argc][i],1);
		i++;
		}
		write(1,"\n",1);
		argc--;
	}
	return 0;
}

