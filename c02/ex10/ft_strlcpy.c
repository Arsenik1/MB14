/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragol <skaragol@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:06:14 by skaragol          #+#    #+#             */
/*   Updated: 2022/02/16 20:27:52 by skaragol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	a;

	i = 0;
	a = ft_strlen(src);

	if(size > a)
		size = a;
	while (i + 1 < size && size <= ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (a);
}
