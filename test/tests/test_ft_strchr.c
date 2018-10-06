#include "../../src/unity.h"
#include <string.h>

char	*ft_strchr(char *s, int c);

void test_strchr_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
	char *actual, *expected;
    
    //calling functions
	expected = strchr(string, 'I');
	actual = ft_strchr(string, 'I');

    //checking results
	TEST_ASSERT_EQUAL_STRING(expected, actual);
}

void test_strchr_2(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
	char *actual, *expected;
    
    //calling functions
	actual = ft_strchr(string, '$');

    //checking results
	TEST_ASSERT_EQUAL_STRING(0, actual);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strchr_1);
	RUN_TEST(test_strchr_2);
    return UNITY_END();
}