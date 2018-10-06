#include "../../src/unity.h"
#include <string.h>

void	*
	ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

void	test_memccpy_1(void)
{
	//declarations
	char src[50], expected[50], actual[50];
	char string[] = "Lorem Ipsum is simply dummy text";
	char c = 'y';
	int n = 30;
	strcpy(src, string);

	memccpy(expected, src, c, n);
	ft_memccpy(actual, src, c, n);
	TEST_ASSERT_EQUAL_STRING(expected, actual);
}

void	test_memccpy_2(void)
{
	//declarations
	char src[50], dest[50];
	char string[] = "Lorem Ipsum is simply dummy text";
	char c = 'y';
	int n = 30;
	strcpy(src, string);

	void *actual = ft_memccpy(dest, src, c, n);
	TEST_ASSERT_EQUAL_PTR(&dest[21], actual);
}

void test_memccpy_3(void)
{
    //declarations
	char string[] = "Lorem Ipsum is simply dummy text";
	char c = 'y';
    struct Persons {
        char  name[50];
        int  age;
    } person;

    struct Persons expected;
    struct Persons actual;

    strcpy( expected.name, "Amine");
    expected.age = 16;

    //calling functions
    memccpy(&expected, &actual, c, sizeof(expected));

    //checking results
    TEST_ASSERT_EQUAL_PTR(&expected.name[21], &actual.name);
}

void test_memccpy_4(void)
{
    //declarations
	char string[] = "Lorem Ipsum is simply dummy text";
	char c = 'y';
    struct Persons {
        char  name[50];
        int  age;
    } person;

    struct Persons src;
    struct Persons dest;

    strcpy(src.name, string);
    src.age = 16;

    //calling functions
    void *actual = ft_memccpy(&dest, &src, c, sizeof(src));

    //checking results
	TEST_ASSERT_EQUAL_PTR(&dest.name[21], actual);
}

int		main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_memccpy_1);
	RUN_TEST(test_memccpy_2);
	//RUN_TEST(test_memccpy_3);
	RUN_TEST(test_memccpy_4);
    return UNITY_END();
}