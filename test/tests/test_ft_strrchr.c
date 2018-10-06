#include "../../src/unity.h"
#include <string.h>

char	*ft_strrchr(char *s, int c);

void test_strrchr_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
	char *actual, *expected;
    
    //calling functions
	expected = strrchr(string, 'I');
	actual = ft_strrchr(string, 'I');

    //checking results
	TEST_ASSERT_EQUAL_STRING(expected, actual);
}

void test_strrchr_2(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
	char *actual, *expected;
    
    //calling functions
	actual = ft_strrchr(string, '$');

    //checking results
	TEST_ASSERT_EQUAL_STRING(0, actual);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strrchr_1);
	RUN_TEST(test_strrchr_2);
    return UNITY_END();
}