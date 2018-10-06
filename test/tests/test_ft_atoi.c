#include "../../src/unity.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

void test_atoi_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    int expected, actual;
    
    //calling functions
	expected = atoi(string);
	actual = ft_atoi(string);

    //checking results
	TEST_ASSERT_EQUAL_INT(expected, actual);
}

void test_atoi_2(void)
{
    //declarations
    char string[] = "10Lorem Ipsum is simply dummy text";
    int expected, actual;
    
    //calling functions
	expected = atoi(string);
	actual = ft_atoi(string);

    //checking results
	TEST_ASSERT_EQUAL_INT(expected, actual);
}

void test_atoi_3(void)
{
    //declarations
    char string[] = "-10Lorem Ipsum is simply dummy text";
    int expected, actual;
    
    //calling functions
	expected = atoi(string);
	actual = ft_atoi(string);

    //checking results
	TEST_ASSERT_EQUAL_INT(expected, actual);
}

void test_atoi_4(void)
{
    //declarations
    char string[] = "-2147483648 Lorem Ipsum is simply dummy text";
    int expected, actual;
    
    //calling functions
	expected = atoi(string);
	actual = ft_atoi(string);

    //checking results
	TEST_ASSERT_EQUAL_INT(expected, actual);
}

void test_atoi_5(void)
{
    //declarations
    char string[] = "+2147483647Lorem Ipsum is simply dummy text";
    int expected, actual;
    
    //calling functions
	expected = atoi(string);
	actual = ft_atoi(string);

    //checking results
	TEST_ASSERT_EQUAL_INT(expected, actual);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_atoi_1);
	RUN_TEST(test_atoi_2);
	RUN_TEST(test_atoi_3);
	RUN_TEST(test_atoi_4);
	RUN_TEST(test_atoi_5);
    return UNITY_END();
}