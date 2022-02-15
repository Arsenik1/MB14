#include <stdio.h>
int ft_str_is_lowercase(char *str)
{
        int i;
        int count;
        i=0;
        count=0;
        while (str[i]!='\0')
        {
                if(str[i]<=122 && str[i]>=97)
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
char str[]={'m','e','r','h','a'};
int i;
i=ft_str_is_lowercase(str);
printf("%d",i);
return 0;
}

