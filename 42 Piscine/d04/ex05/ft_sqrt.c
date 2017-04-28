/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 22:31:51 by mtan              #+#    #+#             */
/*   Updated: 2017/04/08 22:35:47 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;

	i = 1;
	if (nb <= 0 || nb == 2)
		return (0);
	while (i < nb / i)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}