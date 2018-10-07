#include "../../src/unity.h"
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2);

void test_strjoin_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    char *actual;
    
    //calling functions
	actual = ft_strjoin(string, string);

    //checking results
	TEST_ASSERT_EQUAL_STRING("Lorem Ipsum is simply dummy textLorem Ipsum is simply dummy text", actual);
}

void test_strjoin_2(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    char *actual;
    
    //calling functions
	actual = ft_strjoin(0, string);

    //checking results
	TEST_ASSERT_NULL(actual);
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strjoin_1);
	RUN_TEST(test_strjoin_2);
    return UNITY_END();
}