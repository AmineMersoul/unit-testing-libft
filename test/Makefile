TEST = tests/test_ft_memset.c

all: memset

memset:
	rm -f build/test_memset
	gcc ../../libft.a $(TEST) ../src/unity.c -o build/test_memset
	./build/test_memset

clean:
	rm -f build/*