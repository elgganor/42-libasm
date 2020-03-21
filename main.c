/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <mrouabeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 11:25:36 by mrouabeh          #+#    #+#             */
/*   Updated: 2020/03/21 12:07:08 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main()
{
	printf("===== TEST LIBASM =====\n\n");

	printf("=== ft_write === \n");
	ft_write(1, "Hello\n", 6);
	ft_write(1, "Hello world\n", 12);
	ft_write(1, "", 1);
	ft_write(1, "\n", 1);

	printf("\n=== ft_read === \n");
	int fd = open("main.c", O_RDONLY);
	char *buf = NULL;
	ft_read(fd, buf, 10);
	printf("%s\n", buf);
	close(fd);

	printf("\n\n=== ft_strlen === \n");
	printf("%zu\n", ft_strlen(""));
	printf("%zu\n", ft_strlen("Hello"));
	printf("%zu\n", ft_strlen("Hello world\n"));

	printf("\n=== ft_strcmp === \n");
	printf("%d\n", ft_strcmp("", ""));
	printf("%d\n", ft_strcmp("Hello", "Hello"));
	printf("%d\n", ft_strcmp("Hello", "Hel"));
	printf("%d\n", ft_strcmp("Hel", "Hello"));
	printf("%d\n", ft_strcmp("Hello", "World"));

	printf("\n=== ft_strcpy ===\n");
	char dest[100];
	printf("%s\n", ft_strcpy(dest, "Hello"));
	printf("%s\n", ft_strcpy(dest, "aaa"));
	printf("%s\n", ft_strcpy(dest, ""));

	printf("\n=== ft_strdup ===\n");
	printf("%s\n", ft_strdup("Hello"));
	printf("%s\n", ft_strdup("world"));
	printf("%s\n", ft_strdup(""));
	return (0);
}
