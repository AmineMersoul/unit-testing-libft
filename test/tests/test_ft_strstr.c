#include "../../src/unity.h"
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

void test_strstr_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
	char *actual, *expected;
    
    //calling functions
	expected = strstr(string, "is");
	actual = ft_strstr(string, "is");

    //checking results
	TEST_ASSERT_EQUAL_STRING(expected, actual);
}

void test_strstr_2(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
	char *actual, *expected;
    
    //calling functions
	actual = ft_strstr(string, "$");

    //checking results
	TEST_ASSERT_EQUAL_STRING(0, actual);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strstr_1);
	RUN_TEST(test_strstr_2);
    return UNITY_END();
}