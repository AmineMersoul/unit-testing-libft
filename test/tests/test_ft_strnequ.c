#include "../../src/unity.h"
#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n);

void test_strnequ_1(void)
{
    //declarations
    int actual;
    char string[] = "Lorem Ipsum is simply dummy text";

    //calling functions
    actual = ft_strnequ(string, string, 10);

    //checking results
    TEST_ASSERT_EQUAL_INT(1, actual);
}

void test_strnequ_2(void)
{
    //declarations
    int actual;
    char string[] = "Lorem Ipsum is simply dummy text";

    //calling functions
    actual = ft_strnequ(string, "string", 10);

    //checking results
    TEST_ASSERT_EQUAL_INT(0, actual);
}

void test_strnequ_3(void)
{
    //declarations
    int actual;
    char string1[] = "Lorem Ipsum is simply dummy text";
	char string2[] = "Lorem Ipsum as simply dummy text";

    //calling functions
    actual = ft_strnequ(string1, string2, 10);

    //checking results
    TEST_ASSERT_EQUAL_INT(1, actual);
}

void test_strnequ_4(void)
{
    //declarations
    int actual;
    char string1[] = "Lorem Ipsum is simply dummy text";
	char string2[] = "Lorem Ipsum as simply dummy text";

    //calling functions
    actual = ft_strnequ(string1, string2, 14);

    //checking results
    TEST_ASSERT_EQUAL_INT(0, actual);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strnequ_1);
	RUN_TEST(test_strnequ_2);
	RUN_TEST(test_strnequ_3);
	RUN_TEST(test_strnequ_4);
    return UNITY_END();
}