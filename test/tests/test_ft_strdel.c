#include "../../src/unity.h"

void	ft_strdel(char **as);
char	*ft_strnew(size_t size);

void test_strdel_1(void)
{
    //declarations
    char *actual;
    
    //calling functions
	actual = ft_strnew(10);
	ft_strdel(&actual);

    //checking results
	TEST_ASSERT_FALSE(actual)
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strdel_1);
    return UNITY_END();
}