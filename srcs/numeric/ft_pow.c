/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 17:24:28 by hthomas           #+#    #+#             */
/*   Updated: 2020/01/10 17:31:40 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_pow(double nb, double pow)
{
	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	return (nb * ft_pow(nb, pow - 1));
}
