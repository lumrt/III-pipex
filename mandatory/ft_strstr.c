/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:18:12 by lumaret           #+#    #+#             */
/*   Updated: 2024/05/02 21:21:17 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_slash(const char *haystack)
{
	char	needle;
	int	i;

	i = 0;
	needle = '/';
	if (haystack)
	{
		while (haystack[i])
		{
			if (haystack[i] == needle)
				return (1);
			i++;
		}
	}
	return (0);
}