/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamargo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 12:15:26 by scamargo          #+#    #+#             */
/*   Updated: 2017/12/13 17:50:20 by scamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		main(int argc, char **argv)
{
	char	*input;
	char	*output;
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit input_file\n");
		return (1);
	}
	if (!is_valid_input(argv[1], &input))
	{
		ft_putstr("error\n");
		return (2);
	}
	if(!(output = find_square(input)))
	{
		ft_putstr("malloc error\n");
		return (3);
	}
	ft_putstr(output);
	return (0);
}
