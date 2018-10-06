#include "../../src/unity.h"

void	ft_memdel(void **ap);
void	*ft_memalloc(size_t size);

void test_memdel_1(void)
{
    //declarations
    char *actual;
    
    //calling functions
	actual = ft_memalloc(10);
	ft_memdel((void*)&actual);

    //checking results
	TEST_ASSERT_FALSE(actual)
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_memdel_1);
    return UNITY_END();
}