#include "../../src/unity.h"

int	ft_isalpha(int c);

void test_isalpha_1(void)
{
    //declarations
	char c = 'x';
    int actual, expected;
    
    //calling functions
	actual = ft_isalpha(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual != 0, "expected non-zero");
}

void test_isalpha_2(void)
{
    //declarations
	char c = '$';
    int actual, expected;
    
    //calling functions
	actual = ft_isalpha(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual == 0, "expected 0");
}

void test_isalpha_3(void)
{
    //declarations
	char c = 'A';
    int actual, expected;
    
    //calling functions
	actual = ft_isalpha(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual != 0, "expected non-zero");
}

void test_isalpha_4(void)
{
    //declarations
	char c = 'X';
    int actual, expected;
    
    //calling functions
	actual = ft_isalpha(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual != 0, "expected non-zero");
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_isalpha_1);
	RUN_TEST(test_isalpha_2);
	RUN_TEST(test_isalpha_3);
	RUN_TEST(test_isalpha_4);
    return UNITY_END();
}