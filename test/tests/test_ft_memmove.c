#include "../../src/unity.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len);

void	test_memmove_1(void)
{
	//declarations
	char c_array[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int size = 10;
	char c_expected[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	char c_current[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	memmove(&c_expected[5], &c_array[3], 5);
	ft_memmove(&c_current[5], &c_array[3], 5);

	int i = 0;
	while (i < size)
	{
		char message[4];
        message[0] = c_current[i];
        message[1] = '!';
        message[2] = c_expected[i];
        message[3] = '\0';
        TEST_ASSERT_MESSAGE(c_expected[i] == c_current[i], message);
        i++;
	}
}

int		main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_memmove_1);
    return UNITY_END();
}