/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noabdull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:04:19 by noabdull          #+#    #+#             */
/*   Updated: 2021/08/18 00:50:47 by noabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!((str[a] >= 'A' && str[a] <= 'Z')
				|| (str[a] >= 'a' && str[a] <= 'z')))
			return (0);
		str[a]++;
	}
	return (1);
}
