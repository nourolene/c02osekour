/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noabdull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 23:14:03 by noabdull          #+#    #+#             */
/*   Updated: 2021/08/18 15:23:04 by noabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{	
			str[a] -= 32;
		}
		a++;
	}
	return (str);
}
/* 
#include <stdio.h>

int main(void)
{
	char seth[] = "banane";

	printf("%s",ft_strupcase(seth));
	return (0);
}


    A SUPPRIMER */
