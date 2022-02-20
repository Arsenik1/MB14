void   ft_sort_int_tab(int *tab, int size)
{
   int     count;
   int     i;
   int     temp;
   i = 0;
   count = 1;
   while (count != 0)
   {
	   i=0;
	   count = 0;
	   while(i!=size-1){
	   if(tab[i] > tab[i+1])
	   {
		   temp = tab[i];
		   tab[i] = tab[i + 1];
		   tab[i + 1] = temp;
		   count++;
	   }
	   i++;
	   }
   }
}
