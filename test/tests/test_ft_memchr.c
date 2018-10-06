#include "../../src/unity.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

void	test_memchr_1(void)
{
	//declarations
	char string[] = "Lorem Ipsum is simply dummy text";
	char c = 'y';
	int n = 30;
	char dest[50];
	strcpy(dest, string);

	void *actual = ft_memchr(dest, c, n);

	TEST_ASSERT_EQUAL_PTR(&dest[20], actual);
}

void	test_memchr_2(void)
{
	//declarations
	char string[] = "Lorem Ipsum is simply dummy text";
	char c = '$';
	int n = 10;
	char dest[50];
	strcpy(dest, string);

	void *actual = ft_memchr(dest, c, n);

	TEST_ASSERT_EQUAL_PTR(0, actual);
}

void	test_memchr_3(void)
{
	//declarations
	char string[] = "Lorem Ipsum is simply dummy text";
	char c = 'y';
	int n = 1;
	char dest[50];
	strcpy(dest, string);

	void *actual = ft_memchr(dest, c, n);

	TEST_ASSERT_EQUAL_PTR(0, actual);
}

int		main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_memchr_1);
	RUN_TEST(test_memchr_2);
	RUN_TEST(test_memchr_3);
    return UNITY_END();
}