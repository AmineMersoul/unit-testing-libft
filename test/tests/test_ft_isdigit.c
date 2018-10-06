#include "../../src/unity.h"

int	ft_isdigit(int c);

void test_isdigit_1(void)
{
    //declarations
	char c = '0';
    int actual, expected;
    
    //calling functions
	actual = ft_isdigit(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual != 0, "expected non-zero");
}

void test_isdigit_2(void)
{
    //declarations
	char c = '$';
    int actual, expected;
    
    //calling functions
	actual = ft_isdigit(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual == 0, "expected 0");
}

void test_isdigit_3(void)
{
    //declarations
	char c = '9';
    int actual, expected;
    
    //calling functions
	actual = ft_isdigit(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual != 0, "expected non-zero");
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_isdigit_1);
	RUN_TEST(test_isdigit_2);
	RUN_TEST(test_isdigit_3);
    return UNITY_END();
}