#include "../../src/unity.h"
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

void test_strncmp_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
	char string2[] = "Lorem Ipsum is simply dummy text";
	int actual, expected;
    
    //calling functions
	expected = strncmp(string, string2, 10);
	actual = ft_strncmp(string, string2, 10);

    //checking results
	TEST_ASSERT_EQUAL_INT(expected, actual);
}

void test_strncmp_2(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
	char string2[] = "Lorem Ipsum as simply dummy text";
	int actual, expected;
    
    //calling functions
	expected = strncmp(string, string2, 50);
	actual = ft_strncmp(string, string2, 50);

    //checking results
	TEST_ASSERT_EQUAL_INT(expected, actual);
}

void test_strncmp_3(void)
{
    //declarations
    char string[] = "Lorem Ipsum as simply dummy text";
	char string2[] = "Lorem Ipsum is simply dummy text";
	int actual, expected;
    
    //calling functions
	expected = strncmp(string, string2, 50);
	actual = ft_strncmp(string, string2, 50);

    //checking results
	TEST_ASSERT_EQUAL_INT(expected, actual);
}

void test_strncmp_4(void)
{
    //declarations
    char string[] = "Lorem Ipsum as simply dummy text";
	char string2[] = "";
	int actual, expected;
    
    //calling functions
	expected = strncmp(string, string2, 1);
	actual = ft_strncmp(string, string2, 1);

    //checking results
	TEST_ASSERT_EQUAL_INT(expected, actual);
}

void test_strncmp_5(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
	char string2[] = "Lorem Ipsum as simply dummy text";
	int actual, expected;
    
    //calling functions
	expected = strncmp(string, string2, 5);
	actual = ft_strncmp(string, string2, 5);

    //checking results
	TEST_ASSERT_EQUAL_INT(expected, actual);
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strncmp_1);
	RUN_TEST(test_strncmp_2);
	RUN_TEST(test_strncmp_3);
	RUN_TEST(test_strncmp_4);
	RUN_TEST(test_strncmp_5);
    return UNITY_END();
}