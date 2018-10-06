#include "../../src/unity.h"

char	*ft_strnew(size_t size);

void test_strnew_1(void)
{
    //declarations
    char *actual;
    
    //calling functions
	actual = ft_strnew(10);

    //checking results
	TEST_ASSERT_TRUE(actual)
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strnew_1);
    return UNITY_END();
}