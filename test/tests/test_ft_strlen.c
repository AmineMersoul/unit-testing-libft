#include "../../src/unity.h"
#include <string.h>

int		ft_strlen(char *str);

void test_strlen_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    int expected, actual;
    
    //calling functions
	expected = strlen(string);
	actual = ft_strlen(string);

    //checking results
	TEST_ASSERT_EQUAL_INT(expected, actual);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strlen_1);
    return UNITY_END();
}