#include "../../src/unity.h"
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb);

void test_strncat_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    char actual[50];
    
    //calling functions
	ft_strncat(actual, string, 10);

    //checking results
	TEST_ASSERT_EQUAL_STRING("Lorem Ipsu", actual);
}

void test_strncat_2(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    char actual[5];
    
    //calling functions
	ft_strncat(actual, string, 10);

    //checking results
	TEST_ASSERT_EQUAL_STRING("Lorem Ipsu", actual);
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strncat_1);
	RUN_TEST(test_strncat_2);
    return UNITY_END();
}