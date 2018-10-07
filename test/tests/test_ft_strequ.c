#include "../../src/unity.h"
#include <string.h>

int	ft_strequ(char const *s1, char const *s2);

void test_strequ_1(void)
{
    //declarations
    int actual;
    char string[] = "Lorem Ipsum is simply dummy text";

    //calling functions
    actual = ft_strequ(string, string);

    //checking results
    TEST_ASSERT_EQUAL_INT(1, actual);
}

void test_strequ_2(void)
{
    //declarations
    int actual;
    char string[] = "Lorem Ipsum is simply dummy text";

    //calling functions
    actual = ft_strequ(string, "string");

    //checking results
    TEST_ASSERT_EQUAL_INT(0, actual);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strequ_1);
	RUN_TEST(test_strequ_2);
    return UNITY_END();
}