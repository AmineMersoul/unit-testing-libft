#include "../../src/unity.h"
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

void test_strcpy_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    char actual[50];
    
    //calling functions
	ft_strcpy(actual, string);

    //checking results
	TEST_ASSERT_EQUAL_STRING(string, actual);
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strcpy_1);
    return UNITY_END();
}