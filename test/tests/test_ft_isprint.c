#include "../../src/unity.h"

int	ft_isprint(int c);

void test_isprint_1(void)
{
    //declarations
	char c = (char)32;
    int actual, expected;
    
    //calling functions
	actual = ft_isprint(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual != 0, "expected non-zero");
}

void test_isprint_2(void)
{
    //declarations
	char c = (char)31;
    int actual, expected;
    
    //calling functions
	actual = ft_isprint(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual == 0, "expected 0");
}

void test_isprint_3(void)
{
    //declarations
	char c = (char)126;
    int actual, expected;
    
    //calling functions
	actual = ft_isprint(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual != 0, "expected non-zero");
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_isprint_1);
	RUN_TEST(test_isprint_2);
	RUN_TEST(test_isprint_3);
    return UNITY_END();
}