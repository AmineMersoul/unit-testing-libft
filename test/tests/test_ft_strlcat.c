#include "../../src/unity.h"
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

void test_strlcat_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    char actual[50];
    
    //calling functions
	ft_strlcat(actual, string, 10);

    //checking results
	TEST_ASSERT_EQUAL_STRING("Lorem Ips", actual);
}

void test_strlcat_2(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    char actual[5];
    
    //calling functions
	ft_strlcat(actual, string, 10);

    //checking results
	TEST_ASSERT_EQUAL_STRING("Lorem Ips", actual);
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strlcat_1);
	RUN_TEST(test_strlcat_2);
    return UNITY_END();
}