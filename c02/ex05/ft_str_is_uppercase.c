#include <stdio.h>
int ft_str_is_uppercase(char *str)
{
        int i;
        int count;
        i=0;
        count=0;
        while (str[i]!='\0')
        {
                if((str[i]<=90 && str[i]>=65))
                {
                }else
                {
                        count++;
                }
                i++;
        }
if(count==0){
return 1;
}else{
return 0;
}
}



int main(){
char str[]={'A','M'};
int i;
i=ft_str_is_uppercase(str);
printf("%d",i);
return 0;
}

