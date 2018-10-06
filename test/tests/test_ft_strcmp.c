#include "../../src/unity.h"
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

void test_strcmp_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
	char string2[] = "Lorem Ipsum is simply dummy text";
	int actual, expected;
    
    //calling functions
	expected = strcmp(string, string2);
	actual = ft_strcmp(string, string2);

    //checking results
	TEST_ASSERT_EQUAL_INT(expected, actual);
}

void test_strcmp_2(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
	char string2[] = "Lorem Ipsum as simply dummy text";
	int actual, expected;
    
    //calling functions
	expected = strcmp(string, string2);
	actual = ft_strcmp(string, string2);

    //checking results
	TEST_ASSERT_EQUAL_INT(expected, actual);
}

void test_strcmp_3(void)
{
    //declarations
    char string[] = "Lorem Ipsum as simply dummy text";
	char string2[] = "Lorem Ipsum is simply dummy text";
	int actual, expected;
    
    //calling functions
	expected = strcmp(string, string2);
	actual = ft_strcmp(string, string2);

    //checking results
	TEST_ASSERT_EQUAL_INT(expected, actual);
}

void test_strcmp_4(void)
{
    //declarations
    char string[] = "Lorem Ipsum as simply dummy text";
	char string2[] = "";
	int actual, expected;
    
    //calling functions
	expected = strcmp(string, string2);
	actual = ft_strcmp(string, string2);

    //checking results
	TEST_ASSERT_EQUAL_INT(expected, actual);
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strcmp_1);
	RUN_TEST(test_strcmp_2);
	RUN_TEST(test_strcmp_3);
	RUN_TEST(test_strcmp_4);
    return UNITY_END();
}