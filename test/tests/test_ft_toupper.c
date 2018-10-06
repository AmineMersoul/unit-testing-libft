#include "../../src/unity.h"

int	ft_toupper(int c);

void test_toupper_1(void)
{
    //declarations
	char c = 'a';
    int actual, expected;
    
    //calling functions
	actual = ft_toupper(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual == 'A', "expected A");
}

void test_toupper_2(void)
{
    //declarations
	char c = 'z';
    int actual, expected;
    
    //calling functions
	actual = ft_toupper(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual == 'Z', "expected Z");
}

void test_toupper_3(void)
{
    //declarations
	char c = '!';
    int actual, expected;
    
    //calling functions
	actual = ft_toupper(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual == '!', "expected !");
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_toupper_1);
	RUN_TEST(test_toupper_2);
	RUN_TEST(test_toupper_3);
    return UNITY_END();
}