/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaplan <@student.42kocaeli.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:20:21 by mkaplan           #+#    #+#             */
/*   Updated: 2022/11/28 14:57:19 by mkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>
//#include <unistd.h>
//#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
