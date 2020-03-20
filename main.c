/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <mrouabeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 15:24:07 by mohamed           #+#    #+#             */
/*   Updated: 2020/03/20 19:44:40 by mrouabeh         ###   ########.fr       */
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

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char dest[20];
	char *src = "Hello";

	printf("%s\n", ft_strcpy(dest, src));
	return (0);
}
