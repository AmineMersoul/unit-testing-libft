#include "../../src/unity.h"
#include <string.h>

void	ft_bzero(char *str, unsigned int n);

void test_bzero_1(void)
{
    //declarations
    char actual[50];
    char string[] = "Lorem Ipsum is simply dummy text";
    int n = 6;
    strcpy(actual, string);

    //calling functions
    ft_bzero(actual, n);

    //checking results
    int i = 0;
    while (i < n || string[i] != '\0')
    {
        if (i < n)
        {
            char s[4];
            s[0] = actual[i];
            s[1] = '!';
            s[2] = '0';
            s[3] = '\0';
            TEST_ASSERT_MESSAGE(actual[i] == '\0', s);
        }
        else
        {
            char s[4];
            s[0] = actual[i];
            s[1] = '!';
            s[2] = string[i];
            s[3] = '\0';
            TEST_ASSERT_MESSAGE(actual[i] == string[i], s);
        }
        i++;
    }
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_bzero_1);
    return UNITY_END();
}