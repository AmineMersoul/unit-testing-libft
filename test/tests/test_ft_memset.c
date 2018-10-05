#include "../../src/unity.h"
#include <string.h>

void	* ft_memset(void *b, int c, size_t len);

void test_memset_1(void)
{
    //declarations
    char expected[50],other[50];
    char string[] = "Lorem Ipsum is simply dummy text";
    int n = 7;
    strcpy(expected, string);
    strcpy(other, string);

    //calling functions
    memset(expected,'$',n);
    ft_memset(other,'$',n);

    //checking results
    int i = 0;
    while (expected[i] != '\0')
    {
        char s[4];
        s[0] = other[i];
        s[1] = '!';
        s[2] = expected[i];
        s[3] = '\0';
        TEST_ASSERT_MESSAGE(other[i] == expected[i], s);
        i++;
    }
}

void test_memset_2(void)
{
    //declarations
    char expected[50],other[50];
    char string[] = "Lorem Ipsum is simply dummy text";
    int n = 37;
    strcpy(expected, string);
    strcpy(other, string);

    //calling functions
    memset(expected,'$',n);
    ft_memset(other,'$',n);

    //checking results
    int i = 0;
    while (expected[i] != '\0')
    {
        char s[4];
        s[0] = other[i];
        s[1] = '!';
        s[2] = expected[i];
        s[3] = '\0';
        TEST_ASSERT_MESSAGE(other[i] == expected[i], s);
        i++;
    }
}

void test_memset_3(void)
{
    //declarations
    int n = 10;
    char expected[n];
    char other[n];

    //calling functions
    void *ptr1 = memset(expected,'$',n);
    void *ptr2 = ft_memset(other,'$',n);

    //checking results
    int i = 0;
    while (i < n)
    {
        char s[4];
        s[0] = other[i];
        s[1] = '!';
        s[2] = expected[i];
        s[3] = '\0';
        TEST_ASSERT_MESSAGE(other[i] == expected[i], s);
        i++;
    }
}

void test_memset_4(void)
{
    //declarations
    int n = 10;
    char expected[n];
    char other[n];

    //calling functions
    void *ptr1 = memset(expected,'$',n);
    void *ptr2 = ft_memset(other,'$',n);

    //checking results
    TEST_ASSERT_EQUAL_MEMORY(expected, other, n);
    TEST_ASSERT_EQUAL_MEMORY(ptr1, ptr2, n);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_memset_1);
    RUN_TEST(test_memset_2);
    RUN_TEST(test_memset_3);
    RUN_TEST(test_memset_4);
    return UNITY_END();
}