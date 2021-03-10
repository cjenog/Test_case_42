/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 04:46:56 by shpark            #+#    #+#             */
/*   Updated: 2021/03/06 16:23:01 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_putstr_non_printable.c"

int		main(void)
{
	char	*string;

	string = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(string);
	printf("\n");
	
}
