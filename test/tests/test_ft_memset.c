#include "../../src/unity.h"
#include <string.h>

void	ft_memset(char *str, char c, unsigned int n);

void test_memset_1(void)
{
    //declarations
    char res[50],other[50];
    char string[] = "Lorem Ipsum is simply dummy text";
    int n = 7;
    strcpy(res, string);
    strcpy(other, string);

    //calling functions
    memset(res,'$',n);
    ft_memset(other,'$',n);

    //checking results
    TEST_ASSERT_EQUAL_STRING(res, other); 
}

void test_memset_2(void)
{
    //declarations
    char res[50],other[50];
    char string[] = "Lorem Ipsum is simply dummy text";
    int n = 35;
    strcpy(res, string);
    strcpy(other, string);

    //calling functions
    memset(res,'$',n);
    ft_memset(other,'$',n);

    //checking results
    TEST_ASSERT_EQUAL_STRING(res, other); 
}

void test_memset_3(void)
{
    //declarations
    char res[50],other[50];
    char string[] = "Lorem Ipsum is simply dummy text";
    int n = 1;
    strcpy(res, string);
    strcpy(other, string);

    //calling functions
    memset(res,'$',n);
    ft_memset(other,'$',n);

    //checking results
    TEST_ASSERT_EQUAL_STRING(res, other); 
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_memset_1);
    RUN_TEST(test_memset_2);
    RUN_TEST(test_memset_3);
    return UNITY_END();
}