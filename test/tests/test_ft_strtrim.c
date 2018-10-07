#include "../../src/unity.h"
#include <string.h>

char	*ft_strtrim(char const *s);

void test_strtrim_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    char *actual;
    
    //calling functions
	actual = ft_strtrim(string);

    //checking results
	TEST_ASSERT_EQUAL_STRING("Lorem Ipsum is simply dummy text", actual);
}

void test_strtrim_2(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    char *actual;
    
    //calling functions
	actual = ft_strtrim(0);

    //checking results
	TEST_ASSERT_NULL(actual);
}

void test_strtrim_3(void)
{
    //declarations
    char string[] = "    Lorem Ipsum is simply dummy text     ";
    char *actual;
    
    //calling functions
	actual = ft_strtrim(string);

    //checking results
	TEST_ASSERT_EQUAL_STRING("Lorem Ipsum is simply dummy text", actual);
}


void test_strtrim_4(void)
{
    //declarations
    char string[] = "   Lorem Ipsum is simply dummy text";
    char *actual;
    
    //calling functions
	actual = ft_strtrim(string);

    //checking results
	TEST_ASSERT_EQUAL_STRING("Lorem Ipsum is simply dummy text", actual);
}


void test_strtrim_5(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text   ";
    char *actual;
    
    //calling functions
	actual = ft_strtrim(string);

    //checking results
	TEST_ASSERT_EQUAL_STRING("Lorem Ipsum is simply dummy text", actual);
}



int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strtrim_1);
	RUN_TEST(test_strtrim_2);
	RUN_TEST(test_strtrim_3);
	RUN_TEST(test_strtrim_4);
	RUN_TEST(test_strtrim_5);
    return UNITY_END();
}