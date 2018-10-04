TEST = tests/test_ft_memset.c tests/test_ft_bzero.c
LIB = ../../libft.a
INCLUDE = ../../includes/libft.h

all: memset bzero

memset:
	rm -f build/test_memset
	gcc $(LIB) tests/test_ft_memset.c  ../src/unity.c -o build/test_memset
	./build/test_memset

bzero:
	rm -f build/test_bzero
	gcc $(LIB) tests/test_ft_bzero.c ../src/unity.c -o build/test_bzero
	./build/test_bzero

clean:
	rm -f build/*