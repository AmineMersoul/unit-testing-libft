#include "../../src/unity.h"
#include <string.h>

char	*ft_strdup(char *src);

void test_strdup_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    char *expected, *actual;
    
    //calling functions
	expected = strdup(string);
	actual = ft_strdup(string);

    //checking results
	TEST_ASSERT_EQUAL_STRING(expected, actual);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strdup_1);
    return UNITY_END();
}