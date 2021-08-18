/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noabdull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:24:19 by noabdull          #+#    #+#             */
/*   Updated: 2021/08/18 23:39:14 by noabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (j && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!j && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			j = 0;
		}
		else
		{
			j = 1;
		}
		i++;
	}
	return (str);
}
/*int main ()
{
	char str[] = "Sa7lut, commMent tu vas ? 42mots quarante-deux; cinquante+et+un";

		printf("%s", ft_strcapitalize(str));
}*/
