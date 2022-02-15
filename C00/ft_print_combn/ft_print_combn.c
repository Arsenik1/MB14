#include <unistd.h>

char arr={'0','1','2','3','4','5','6','7','8','9'};

void ft_putnbr(int nb){
    int ters=0;
    int kalan=0;
    int on=1;
    while (nb!=0)
    {
        kalan=nb%10;
        nb=nb/10;
        ters=10*ters+kalan;
    }
    if (ters<0)
    {
        write(1, "-", 1);
        ters=-ters;
    }
    char yaz;
    while (ters != 0)
    {

        kalan=ters%10;
        ters=ters/10;
        yaz=(char)kalan+48;
        write(1,&yaz,1);
        on=on*10;
    }
}

void ft_print_combn(int n){
    int i;
    int j;
    for (i=0; i<n; i++) {
        for (j=0; j<; <#increment#>) {
            <#statements#>
        }
    }
}






int main(){
    int c=4;
    ft_print_combn(c);
    return 0;
}
