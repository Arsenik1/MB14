#include <stdio.h>
char ft_strupcase(char *str)
{
        int i;
        i=0;
        while (str[i]!='\0')
        {
                if(str[i]<=122 && str[i]>=97)
                {
			str[i]=str[i]-32;
                }
                i++;
        }
return (*str);
}



int main(){
char str[]={'3','e','r','h','a'};
int i=0;
*str=ft_strupcase(str);
while(i<5){
printf("%c",str[i]);
i++;
}
return 0;
}

