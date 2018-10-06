#include "../../src/unity.h"

void	*ft_memalloc(size_t size);

void test_memalloc_1(void)
{
    //declarations
    char *actual;
    
    //calling functions
	actual = ft_memalloc(10);

    //checking results
	TEST_ASSERT_TRUE(actual)
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_memalloc_1);
    return UNITY_END();
}