/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasimi <mnasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 14:42:24 by mnasimi           #+#    #+#             */
/*   Updated: 2026/09/19 14:48:38 by mnasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	show(char *v)
{
	int	i;

	i = 0;
	while (v[i])
	{
		if (v[i] >= 97 && v[i] <= 122)
			std::cout << (char)(v[i] - 32);
		else
			std::cout << (char)v[i];
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac < 2){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
    }
	int i = 0;
	while (i < ac - 1)
	{
		show(av[i + 1]);
		i++;
	}
    std::cout << "\n";
	return (0);
}