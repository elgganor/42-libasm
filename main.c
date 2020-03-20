/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <mrouabeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 15:24:07 by mohamed           #+#    #+#             */
/*   Updated: 2020/03/20 17:56:04 by mrouabeh         ###   ########.fr       */
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
	int ret = 0;
	char buf[100];

	fd = open("test.txt", O_RDONLY);
	ret = ft_read(fd, buf, 11);
	buf[ret] = '\0';
	printf("[%d]: %s\n", ret, buf);
	close(fd);
}

int main()
{
	int ret;

	ret = ft_strcmp("He", "He");
	printf("%d\n", ret);
	return (0);
}
