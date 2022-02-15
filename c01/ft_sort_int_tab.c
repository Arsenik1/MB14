 void	ft_sort_int_tab(int *tab, int size)
{
	int		count;
	int		i;
	int		tmp;
	int		
	i = 0;
	count = 0;
	while (count == 0)
	{
		count = 0; 
		if(tab[i] > tab[i+1])
		{
			if(tab[i+1] == tab[size+1])
			{
				i = 0;
			}
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
		}
		i++;
	}
}
