#include "../../src/unity.h"
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

void test_strncpy_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
	char s1[50], s2[50];
	int n = 50;
    char expected[50], actual[50];
	strcpy(s1, string);
	strcpy(s2, string);
    
    //calling functions
	strncpy(expected, string, n);
	ft_strncpy(actual, string, n);

    //checking results
	TEST_ASSERT_EQUAL_STRING(expected, actual);
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strncpy_1);
    return UNITY_END();
}