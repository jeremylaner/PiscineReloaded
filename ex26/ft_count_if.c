/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaner <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 21:11:29 by jlaner            #+#    #+#             */
/*   Updated: 2016/11/03 21:12:41 by jlaner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}
