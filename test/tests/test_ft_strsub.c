#include "../../src/unity.h"
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len);

void test_strsub_1(void)
{
    //declarations
    char *actual;
    char string[] = "Lorem Ipsum is simply dummy text";

    //calling functions
    actual = ft_strsub(string, 5, 10);

    //checking results
    TEST_ASSERT_EQUAL_STRING("Ipsum is s", actual);
}

void test_strsub_2(void)
{
    //declarations
    char *actual;
    char string[] = "Lorem Ipsum is simply dummy text";

    //calling functions
    actual = ft_strsub(string, 10, 10);

    //checking results
    TEST_ASSERT_EQUAL_STRING(" is simply", actual);
}

void test_strsub_3(void)
{
    //declarations
    char *actual;
    char string[] = "Lorem Ipsum is simply dummy text";

    //calling functions
    actual = ft_strsub(string, 20, 20);

    //checking results
    TEST_ASSERT_NULL(actual);
}

void test_strsub_4(void)
{
    //declarations
    char *actual;
    char string[] = "Lorem Ipsum is simply dummy text";

    //calling functions
    actual = ft_strsub(0, 10, 10);

    //checking results
    TEST_ASSERT_NULL(actual);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strsub_1);
	RUN_TEST(test_strsub_2);
	RUN_TEST(test_strsub_3);
	RUN_TEST(test_strsub_4);
    return UNITY_END();
}