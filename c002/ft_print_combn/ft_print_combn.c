#include <unistd.h>

int kombinasyonyolla(int size){
int payda;
int i;
int comb;
i=1;
payda=1;
while(i<=size){
payda=payda*i;
i++;
}
i=1;
comb=1;
while(i<=size){
comb=comb*(10-i)/payda;
i++;
}
return comb;
}

int onussu(int us){
int esittir;
esittir=1;
while (us>0){
esittir=esittir*10;
us--;
}
return esittir;
}

void	recursiveyolla(unsigned long int sayi, int i,unsigned long int on,int boyut){
char arr[11];
int a;
write(1,"asd",1);
if((sayi%10>(sayi%(100)-sayi%10))&&sayi!=1){
sayi=sayi/10;
on=on*10;
recursiveyolla(sayi, i, on,boyut);
i++;
}else if(i==9 && sayi>(onussu(boyut))){
a = 0;
while(a<boyut){
arr[a]=(char)sayi%10;
a++;
sayi/10;
}
a=0;
while(a<boyut){
write(1,&arr[a],1);
}
write(1,", ",2);
return;
}else{
return;
}
}

 void ft_print_combn(int n){
unsigned long int sayi;
int i;
unsigned long int on;
int comb;
comb=kombinasyonyolla(n);
sayi = 10000000000;
sayi= sayi%(10000000000/onussu(n));
write(1,"asdsad",4);
while(comb>0){
write(1,"asdsad",4);
on=10;
i=0;
recursiveyolla(sayi,i,on,n);
sayi++;
comb--;
}
 }




int main(){
    int c=4;   
ft_print_combn(c);
    return 0;
}
