/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zytrams <zytrams@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:10:25 by zytrams           #+#    #+#             */
/*   Updated: 2019/05/01 20:35:39 by zytrams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_isalpha(int c)
{
	return ((c >= (int)'a' && c <= (int)'z')
	|| (c >= (int)'A' && c <= (int)'Z'));
}