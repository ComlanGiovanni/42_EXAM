/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:47:02 by galpers           #+#    #+#             */
/*   Updated: 2022/08/22 22:30:55 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	n1;
	int n2;
	int	res;

	n1 = 0;
	n2 = 0;
	res = 0;
	if (ac == 4)
	{
		n1 = atoi(av[1]);
		n2 = atoi(av[3]);
		if (av[2][0] == '+')
			res = n1 + n2;
		else if (av[2][0] == '-')
			res = n1 - n2;
		else if (av[2][0] == '*')
			res = n1 * n2;
		else if (av[2][0]== '/')
			res = n1 / n2;
		else if (av[2][0] == '%')
			res = n1 % n2;
		printf("%d\n", res);
	}
	else
		write (1, "\n", 1);
}
