/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:25:47 by marvin            #+#    #+#             */
/*   Updated: 2024/04/24 11:51:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

void	test_addition(void)
{
	int	sum;

	sum = 5 + 3;
	assert(sum == 8);
}

void	test_multiplication(void)
{
	int	product;

	product = 4 * 3;
	assert(product == 12);
}

void	test_ft_bzero(void)
{
	char	my_buf[50];
	char	std_buf[50];
	int		int_buf1[50];
	int		int_buf2[50];

	memset(my_buf, 'A', sizeof(my_buf));
	memset(std_buf, 'A', sizeof(std_buf));

	memset(int_buf1, '1', sizeof(int_buf1));
	memset(int_buf2, '1', sizeof(int_buf2));

	ft_bzero(my_buf, sizeof(my_buf));
	bzero(std_buf, sizeof(std_buf));

	ft_bzero(int_buf1, sizeof(int_buf1));
	bzero(int_buf2, sizeof(int_buf2));

	assert(memcmp(my_buf, std_buf, sizeof(my_buf)) == 0);
	assert(memcmp(int_buf1, int_buf2, sizeof(int_buf1)) == 0);
}

void	test_ft_isalpha(void)
{
	printf("%d\n", isalpha('c'));
	assert(isalpha('4') == ft_isalpha('4'));
	assert(isalpha('f') == ft_isalpha('f'));
	assert(isalpha('-') == ft_isalpha('-'));
	assert(isalpha('G') == ft_isalpha('G'));
}

void	test_ft_isalnum(void)
{
	printf("%d\n", isalnum('c'));
	assert(isalnum('4') == ft_isalnum('4'));
	assert(isalnum('f') == ft_isalnum('f'));
	assert(isalnum('-') == ft_isalnum('-'));
	assert(isalnum('5') == ft_isalnum('5'));
}

void	test_ft_isascii(void)
{
	printf("%d\n", isascii('c'));
	assert(isascii('4') == ft_isascii('4'));
	assert(isascii('f') == ft_isascii('f'));
	assert(isascii('-') == ft_isascii('-'));
	assert(isascii('5') == ft_isascii('5'));
}

void	test_ft_isprint(void)
{
	printf("%d\n", isprint('c'));
	assert(isprint('4') == ft_isprint('4'));
	assert(isprint('\0') == ft_isprint('\0'));
	assert(isprint('-') == ft_isprint('-'));
	assert(isprint('5') == ft_isprint('5'));
}

void test_ft_strlen()
{
	char *str = "hello world";

	assert(strlen(str) == ft_strlen(str));
}

int	main(void)
{
	test_addition();
	test_multiplication();
	test_ft_bzero();
	test_ft_isalpha();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	printf("All tests passed successfully!\n");
	return (0);
}
