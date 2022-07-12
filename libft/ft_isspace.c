/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimarque <mimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:54:59 by mimarque          #+#    #+#             */
/*   Updated: 2022/07/07 23:45:26 by mimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
static int	ft_isspace(int c)
{
	return ((c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
			|| c == '\v'));
}
*/

int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}