/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noabdull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 23:08:52 by noabdull          #+#    #+#             */
/*   Updated: 2021/08/18 11:14:53 by noabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] += 32;
		}
		a++;
	}
	return (str);
}
/*#include <stdio.h>

int main(void)
{
	char seth[] = "BananE";

	printf("%s",ft_strlowcase(seth));
	return (0);
}*/
