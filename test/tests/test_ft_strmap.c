#include "../../src/unity.h"
#include <string.h>

char	*ft_strmap(char const *s, char (*f)(char));

char	testf(char c)
{
	if (c == ' ')
		return '$';
	return 'x';
}

void test_ft_strmap_1(void)
{
    //declarations
    char string[] = "Lorem Ipsum is simply dummy text";
    
    //calling functions
	char *actual = ft_strmap(string, &testf);

    //checking results
	TEST_ASSERT_EQUAL_STRING("xxxxx$xxxxx$xx$xxxxxx$xxxxx$xxxx", actual);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_ft_strmap_1);
    return UNITY_END();
}