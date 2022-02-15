#include <unistd.h>

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













int main(){
    int nb=-123;
    ft_putnbr(nb);
    return 0;
}
