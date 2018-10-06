#include "../../src/unity.h"

int	ft_isascii(int c);

void test_isascii_1(void)
{
    //declarations
	char c = 0;
    int actual, expected;
    
    //calling functions
	actual = ft_isascii(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual != 0, "expected non-zero");
}

void test_isascii_2(void)
{
    //declarations
	char c = (char)128;
    int actual, expected;
    
    //calling functions
	actual = ft_isascii(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual == 0, "expected 0");
}

void test_isascii_3(void)
{
    //declarations
	char c = 'A';
    int actual, expected;
    
    //calling functions
	actual = ft_isascii(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual != 0, "expected non-zero");
}

void test_isascii_4(void)
{
    //declarations
	char c = 127;
    int actual, expected;
    
    //calling functions
	actual = ft_isascii(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual != 0, "expected non-zero");
}

void test_isascii_5(void)
{
    //declarations
	char c = 0x7F;
    int actual, expected;
    
    //calling functions
	actual = ft_isascii(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual != 0, "expected non-zero");
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_isascii_1);
	RUN_TEST(test_isascii_2);
	RUN_TEST(test_isascii_3);
	RUN_TEST(test_isascii_4);
	RUN_TEST(test_isascii_5);
    return UNITY_END();
}