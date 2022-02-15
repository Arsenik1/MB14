/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragol <skaragol@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:59:10 by skaragol          #+#    #+#             */
/*   Updated: 2022/02/15 01:03:19 by skaragol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int				i;
	unsigned int	c;

	c = 0;
	while (c < n)
	{
		if (src[c] != '\0')
		{
			dest[c] = src[c];
		}
		else
		{
			while (c < n)
			{
				dest[c] = '\0';
				c++;
			}
			c = n + 1;
		}
		c++;
	}
	return (dest);
}
