#include "../../src/unity.h"

int	ft_isalnum(int c);

void test_isalnum_1(void)
{
    //declarations
	char c = 'x';
    int actual, expected;
    
    //calling functions
	actual = ft_isalnum(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual != 0, "expected non-zero");
}

void test_isalnum_2(void)
{
    //declarations
	char c = '$';
    int actual, expected;
    
    //calling functions
	actual = ft_isalnum(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual == 0, "expected 0");
}

void test_isalnum_3(void)
{
    //declarations
	char c = 'A';
    int actual, expected;
    
    //calling functions
	actual = ft_isalnum(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual != 0, "expected non-zero");
}

void test_isalnum_4(void)
{
    //declarations
	char c = '1';
    int actual, expected;
    
    //calling functions
	actual = ft_isalnum(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual != 0, "expected non-zero");
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_isalnum_1);
	RUN_TEST(test_isalnum_2);
	RUN_TEST(test_isalnum_3);
	RUN_TEST(test_isalnum_4);
    return UNITY_END();
}