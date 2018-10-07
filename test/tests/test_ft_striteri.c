#include "../../src/unity.h"
#include <string.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	testf(unsigned int i, char *c)
{
	*c = i % 10 + 48;
}

void test_striteri_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    
    //calling functions
	ft_striteri(string, &testf);

    //checking results
	TEST_ASSERT_EQUAL_STRING("01234567890123456789012345678901", string);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_striteri_1);
    return UNITY_END();
}