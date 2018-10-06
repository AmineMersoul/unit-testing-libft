#include "../../src/unity.h"
#include <string.h>

char	*ft_strcat(char *dest, char *src);

void test_strcat_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    char actual[50];
    
    //calling functions
	ft_strcat(actual, string);

    //checking results
	TEST_ASSERT_EQUAL_STRING("Lorem Ipsum is simply dummy text", actual);
}

void test_strcat_2(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    char actual[5];
    
    //calling functions
	ft_strcat(actual, string);

    //checking results
	TEST_ASSERT_EQUAL_STRING("Lorem Ipsum is simply dummy text", actual);
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strcat_1);
	RUN_TEST(test_strcat_2);
    return UNITY_END();
}