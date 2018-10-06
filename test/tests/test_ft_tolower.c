#include "../../src/unity.h"

int	ft_tolower(int c);

void test_tolower_1(void)
{
    //declarations
	char c = 'A';
    int actual, expected;
    
    //calling functions
	actual = ft_tolower(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual == 'a', "expected a");
}

void test_tolower_2(void)
{
    //declarations
	char c = 'Z';
    int actual, expected;
    
    //calling functions
	actual = ft_tolower(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual == 'z', "expected z");
}

void test_tolower_3(void)
{
    //declarations
	char c = '!';
    int actual, expected;
    
    //calling functions
	actual = ft_tolower(c);

    //checking results
	TEST_ASSERT_MESSAGE(actual == '!', "expected !");
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_tolower_1);
	RUN_TEST(test_tolower_2);
	RUN_TEST(test_tolower_3);
    return UNITY_END();
}