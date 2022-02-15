#include <stdio.h>
char ft_strlowcase(char *str)
{
        int i;
        i=0;
        while (str[i]!='\0')
        {
                if(str[i]<=90 && str[i]>=60)
                {
                        str[i]=str[i]+32;
                }
                i++;
        }
return (*str);
}



int main(){
char str[]={'3','E','R','h','a'};
int i=0;
*str=ft_strlowcase(str);
while(i<5){
printf("%c",str[i]);
i++;
}
return 0;
}

