#include "../../src/unity.h"
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	test_memcmp_1(void)
{
	//declarations
	char string[] = "Lorem Ipsum is simply dummy text";
	char string2[] = "Lorem Ipsum is simply dummy text";
	int n = 30;
	char s1[50], s2[50];
	strcpy(s1, string);
	strcpy(s2, string2);

	int actual = ft_memcmp(s1, s2, n);

	TEST_ASSERT_MESSAGE(actual == 0, "should return 0");
}

void	test_memcmp_2(void)
{
	//declarations
	char string[] = "Lorem apsum is simply dummy text";
	char string2[] = "Lorem Ipsum is simply dummy text";
	int n = 30;
	char s1[50], s2[50];
	strcpy(s1, string);
	strcpy(s2, string2);

	int actual = ft_memcmp(s1, s2, n);

	TEST_ASSERT_MESSAGE(actual > 0, "should positive number");
}

void	test_memcmp_3(void)
{
	//declarations
	char string[] = "Lorem Ipsum is simply dummy text";
	char string2[] = "Lorem apsum is simply dummy text";
	int n = 30;
	char s1[50], s2[50];
	strcpy(s1, string);
	strcpy(s2, string2);

	int actual = ft_memcmp(s1, s2, n);

	TEST_ASSERT_MESSAGE(actual < 0, "should nigative number");
}

void	test_memcmp_4(void)
{
	//declarations
	int src[] = {1, 2, 3};
	int dest[] = {1, 2, 3};

	int actual = ft_memcmp(src, dest, sizeof(src));

	TEST_ASSERT_MESSAGE(actual == 0, "should return 0");
}

void	test_memcmp_5(void)
{
	//declarations
	int src[] = {1, 2, 3};
	int dest[] = {1, 2, 2};

	int actual = ft_memcmp(src, dest, sizeof(src));

	TEST_ASSERT_MESSAGE(actual > 0, "should positive number");
}

void	test_memcmp_6(void)
{
	//declarations
	int src[] = {1, 2, 3};
	int dest[] = {1, 2, 4};

	int actual = ft_memcmp(src, dest, sizeof(src));

	TEST_ASSERT_MESSAGE(actual < 0, "should nigative number");
}

int		main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_memcmp_1);
	RUN_TEST(test_memcmp_2);
	RUN_TEST(test_memcmp_3);
	RUN_TEST(test_memcmp_4);
	RUN_TEST(test_memcmp_5);
	RUN_TEST(test_memcmp_6);
    return UNITY_END();
}