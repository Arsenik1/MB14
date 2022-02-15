#include <stdio.h>
int ft_str_is_numeric(char *str)
{
        int i;
        int count;
        i=0;
        count=0;
        while (str[i]!='\0')
        {
                if(str[i]<=57 && str[i]>=48)
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
char str[]={'3','e'};
int i;
i=ft_str_is_numeric(str);
printf("%d",i);
return 0;
}

