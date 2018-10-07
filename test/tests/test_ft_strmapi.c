#include "../../src/unity.h"
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	testf(unsigned int i, char c)
{
	if (c == ' ')
		return '$';
	return i % 10 + 48;
}

void test_ft_strmapi_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    
    //calling functions
	char *actual = ft_strmapi(string, &testf);

    //checking results
	TEST_ASSERT_EQUAL_STRING("01234$67890$23$567890$23456$8901", actual);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_ft_strmapi_1);
    return UNITY_END();
}