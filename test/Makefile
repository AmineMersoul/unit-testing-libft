TEST = tests/test_ft_memset.c tests/test_ft_bzero.c
LIB = ../../libft.a
INCLUDE = ../../includes/libft.h

all: memset bzero memcpy

memset:
	rm -f build/test_memset
	gcc $(LIB) tests/test_ft_memset.c  ../src/unity.c -o build/test_memset
	./build/test_memset

bzero:
	rm -f build/test_bzero
	gcc $(LIB) tests/test_ft_bzero.c ../src/unity.c -o build/test_bzero
	./build/test_bzero

memcpy:
	rm -f build/test_memcpy
	gcc $(LIB) tests/test_ft_memcpy.c  ../src/unity.c -o build/test_memcpy
	./build/test_memcpy


clean:
	rm -f build/*