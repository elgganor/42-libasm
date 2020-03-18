/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <mrouabeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 15:24:07 by mohamed           #+#    #+#             */
/*   Updated: 2020/03/18 11:34:09 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void test_write()
{
	const char *msg = "Wesh mec\n";

	ft_write(1, msg, 9);
}

void test_read()
{
	int fd;
	char *line = NULL;

	fd = open("test.txt", O_RDONLY);
	ft_read(fd, line, 11);
	printf("%s\n", line);
	close(fd);
}

int main()
{
	//test_write();
	test_read();
	return (0);
}
