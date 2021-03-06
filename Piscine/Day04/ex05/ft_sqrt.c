/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvarly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 12:32:43 by uvarly            #+#    #+#             */
/*   Updated: 2018/10/20 14:04:22 by uvarly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb);

int		ft_sqrt(int nb)
{
	int i;
	int root;

	i = 2;
	root = -1;
	if (nb <= 0)
	{
		return (0);
	}
	while ((i * i) <= nb)
	{
		if ((i * i) == nb)
		{
			root = i;
			i++;
		}
	}
	if (root == -1)
	{
		return (0);
	}
	return (root);
}
