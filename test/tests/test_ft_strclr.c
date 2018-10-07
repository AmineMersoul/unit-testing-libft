#include "../../src/unity.h"

void	ft_strclr(char *s);

void test_strclr_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
	int len = 32;
    
    //calling functions
	ft_strclr(string);

    //checking results
	int i = 0;
	while (i < len)
	{
		TEST_ASSERT_MESSAGE(string[i] == '\0', "expexted 0");
		i++;
	}
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strclr_1);
    return UNITY_END();
}