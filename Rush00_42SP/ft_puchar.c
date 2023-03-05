/* ************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkikuti- <mkikuti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:38:28 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/03/04 17:22:30 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}