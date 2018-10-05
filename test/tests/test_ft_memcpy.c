#include "../../src/unity.h"
#include <string.h>

void	* ft_memcpy(void *destination, const void *source, size_t num);

void test_memcpy_1(void)
{
    //declarations
    char expected[50], actual[50];
    char string[] = "Lorem Ipsum is simply dummy text";
    int n = 10;
    strcpy(expected, string);
    strcpy(actual, string);

    //calling functions
    ft_memcpy(expected, actual, n);

    //checking results
    TEST_ASSERT_EQUAL_STRING(expected, actual);
}

void test_memcpy_2(void)
{
    //declarations
    char dest[50], src[50];
    char string[] = "Lorem Ipsum is simply dummy text";
    int n = 10;
    strcpy(src, string);

    //calling functions
    char *expected = memcpy(dest, src, n);
    char *actual = ft_memcpy(dest, src, n);

    //checking results
    TEST_ASSERT_EQUAL_PTR(expected, actual);
}

void test_memcpy_3(void)
{
    //declarations
    struct Persons {
        char  name[50];
        int  age;
    } person;

    struct Persons expected;
    struct Persons actual;

    strcpy( expected.name, "Amine");
    expected.age = 16;

    //calling functions
    ft_memcpy(&expected, &actual, sizeof(expected));

    //checking results
    TEST_ASSERT_EQUAL_STRING(expected.name, actual.name);
    TEST_ASSERT_EQUAL_INT(expected.age, actual.age);
}

void test_memcpy_4(void)
{
    //declarations
    struct Persons {
        char  name[50];
        int  age;
    } person;

    struct Persons src;
    struct Persons dest;

    strcpy( src.name, "Amine");
    src.age = 16;

    //calling functions
    char *expected = ft_memcpy(&src, &dest, sizeof(src));
    char *actual = ft_memcpy(&src, &dest, sizeof(src));

    //checking results
    TEST_ASSERT_EQUAL_PTR(expected, actual);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_memcpy_1);
    RUN_TEST(test_memcpy_2);
    RUN_TEST(test_memcpy_3);
    RUN_TEST(test_memcpy_4);
    return UNITY_END();
}