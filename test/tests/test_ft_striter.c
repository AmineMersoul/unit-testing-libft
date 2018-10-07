#include "../../src/unity.h"
#include <string.h>

void	ft_striter(char *s, void (*f)(char *));

void	testf(char *c)
{
	*c = 'x';
}

void test_striter_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    
    //calling functions
	ft_striter(string, &testf);

    //checking results
	TEST_ASSERT_EQUAL_STRING("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", string);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_striter_1);
    return UNITY_END();
}