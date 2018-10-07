LIB = ../libft/libft.a

all: relib memset bzero memcpy memccpy memmove memchr memcmp strlen strdup strcpy strncpy strcat strncat strlcat strchr strrchr strstr strcmp strncmp atoi isalpha isdigit isalnum isascii isprint toupper tolower memalloc memdel strnew strdel strclr striter striteri strmap strmapi strequ strnequ strnequ strsub strjoin strtrim

relib:
	cd ../libft && $(MAKE) re && $(MAKE) clean

end:
	cd ../libft && $(MAKE) fclean

memset:
	rm -f test/build/test_memset
	gcc $(LIB) test/tests/test_ft_memset.c  src/unity.c -o test/build/test_memset
	./test/build/test_memset

bzero:
	rm -f test/build/test_bzero
	gcc $(LIB) test/tests/test_ft_bzero.c src/unity.c -o test/build/test_bzero
	./test/build/test_bzero

memcpy:
	rm -f test/build/test_memcpy
	gcc $(LIB) test/tests/test_ft_memcpy.c  src/unity.c -o test/build/test_memcpy
	./test/build/test_memcpy

memccpy:
	rm -f test/build/test_memccpy
	gcc $(LIB) test/tests/test_ft_memccpy.c  src/unity.c -o test/build/test_memccpy
	./test/build/test_memccpy

memmove:
	rm -f test/build/test_memmove
	gcc $(LIB) test/tests/test_ft_memmove.c  src/unity.c -o test/build/test_memmove
	./test/build/test_memmove

memchr:
	rm -f test/build/test_memchr
	gcc $(LIB) test/tests/test_ft_memchr.c  src/unity.c -o test/build/test_memchr
	./test/build/test_memchr

memcmp:
	rm -f test/build/test_memcmp
	gcc $(LIB) test/tests/test_ft_memcmp.c  src/unity.c -o test/build/test_memcmp
	./test/build/test_memcmp

strlen:
	rm -f test/build/test_strlen
	gcc $(LIB) test/tests/test_ft_strlen.c  src/unity.c -o test/build/test_strlen
	./test/build/test_strlen

strdup:
	rm -f test/build/test_strdup
	gcc $(LIB) test/tests/test_ft_strdup.c  src/unity.c -o test/build/test_strdup
	./test/build/test_strdup

strcpy:
	rm -f test/build/test_strcpy
	gcc $(LIB) test/tests/test_ft_strcpy.c  src/unity.c -o test/build/test_strcpy
	./test/build/test_strcpy

strncpy:
	rm -f test/build/test_strncpy
	gcc $(LIB) test/tests/test_ft_strncpy.c  src/unity.c -o test/build/test_strncpy
	./test/build/test_strncpy

strcat:
	rm -f test/build/test_strcat
	gcc $(LIB) test/tests/test_ft_strcat.c  src/unity.c -o test/build/test_strcat
	./test/build/test_strcat

strncat:
	rm -f test/build/test_strncat
	gcc $(LIB) test/tests/test_ft_strncat.c  src/unity.c -o test/build/test_strncat
	./test/build/test_strncat

strlcat:
	rm -f test/build/test_strlcat
	gcc $(LIB) test/tests/test_ft_strlcat.c  src/unity.c -o test/build/test_strlcat
	./test/build/test_strlcat

strchr:
	rm -f test/build/test_strchr
	gcc $(LIB) test/tests/test_ft_strchr.c  src/unity.c -o test/build/test_strchr
	./test/build/test_strchr

strrchr:
	rm -f test/build/test_strrchr
	gcc $(LIB) test/tests/test_ft_strrchr.c  src/unity.c -o test/build/test_strrchr
	./test/build/test_strrchr

strstr:
	rm -f test/build/test_strstr
	gcc $(LIB) test/tests/test_ft_strstr.c  src/unity.c -o test/build/test_strstr
	./test/build/test_strstr

strcmp:
	rm -f test/build/test_strcmp
	gcc $(LIB) test/tests/test_ft_strcmp.c  src/unity.c -o test/build/test_strcmp
	./test/build/test_strcmp

strncmp:
	rm -f test/build/test_strncmp
	gcc $(LIB) test/tests/test_ft_strncmp.c  src/unity.c -o test/build/test_strncmp
	./test/build/test_strncmp

atoi:
	rm -f test/build/test_atoi
	gcc $(LIB) test/tests/test_ft_atoi.c  src/unity.c -o test/build/test_atoi
	./test/build/test_atoi

isalpha:
	rm -f test/build/test_isalpha
	gcc $(LIB) test/tests/test_ft_isalpha.c  src/unity.c -o test/build/test_isalpha
	./test/build/test_isalpha

isdigit:
	rm -f test/build/test_isdigit
	gcc $(LIB) test/tests/test_ft_isdigit.c  src/unity.c -o test/build/test_isdigit
	./test/build/test_isdigit

isalnum:
	rm -f test/build/test_isalnum
	gcc $(LIB) test/tests/test_ft_isalnum.c  src/unity.c -o test/build/test_isalnum
	./test/build/test_isalnum

isascii:
	rm -f test/build/test_isascii
	gcc $(LIB) test/tests/test_ft_isascii.c  src/unity.c -o test/build/test_isascii
	./test/build/test_isascii

isprint:
	rm -f test/build/test_isprint
	gcc $(LIB) test/tests/test_ft_isprint.c  src/unity.c -o test/build/test_isprint
	./test/build/test_isprint

toupper:
	rm -f test/build/test_toupper
	gcc $(LIB) test/tests/test_ft_toupper.c  src/unity.c -o test/build/test_toupper
	./test/build/test_toupper

tolower:
	rm -f test/build/test_tolower
	gcc $(LIB) test/tests/test_ft_tolower.c  src/unity.c -o test/build/test_tolower
	./test/build/test_tolower

memalloc:
	rm -f test/build/test_memalloc
	gcc $(LIB) test/tests/test_ft_memalloc.c  src/unity.c -o test/build/test_memalloc
	./test/build/test_memalloc

memdel:
	rm -f test/build/test_memdel
	gcc $(LIB) test/tests/test_ft_memdel.c  src/unity.c -o test/build/test_memdel
	./test/build/test_memdel

strnew:
	rm -f test/build/test_strnew
	gcc $(LIB) test/tests/test_ft_strnew.c  src/unity.c -o test/build/test_strnew
	./test/build/test_strnew

strdel:
	rm -f test/build/test_strdel
	gcc $(LIB) test/tests/test_ft_strdel.c  src/unity.c -o test/build/test_strdel
	./test/build/test_strdel

strclr:
	rm -f test/build/test_strclr
	gcc $(LIB) test/tests/test_ft_strclr.c  src/unity.c -o test/build/test_strclr
	./test/build/test_strclr

striter:
	rm -f test/build/test_striter
	gcc $(LIB) test/tests/test_ft_striter.c  src/unity.c -o test/build/test_striter
	./test/build/test_striter

striteri:
	rm -f test/build/test_striteri
	gcc $(LIB) test/tests/test_ft_striteri.c  src/unity.c -o test/build/test_striteri
	./test/build/test_striteri

strmap:
	rm -f test/build/test_strmap
	gcc $(LIB) test/tests/test_ft_strmap.c  src/unity.c -o test/build/test_strmap
	./test/build/test_strmap

strmapi:
	rm -f test/build/test_strmapi
	gcc $(LIB) test/tests/test_ft_strmapi.c  src/unity.c -o test/build/test_strmapi
	./test/build/test_strmapi

strequ:
	rm -f test/build/test_strequ
	gcc $(LIB) test/tests/test_ft_strequ.c  src/unity.c -o test/build/test_strequ
	./test/build/test_strequ

strnequ:
	rm -f test/build/test_strnequ
	gcc $(LIB) test/tests/test_ft_strnequ.c  src/unity.c -o test/build/test_strnequ
	./test/build/test_strnequ

strsub:
	rm -f test/build/test_strsub
	gcc $(LIB) test/tests/test_ft_strsub.c  src/unity.c -o test/build/test_strsub
	./test/build/test_strsub

strjoin:
	rm -f test/build/test_strjoin
	gcc $(LIB) test/tests/test_ft_strjoin.c  src/unity.c -o test/build/test_strjoin
	./test/build/test_strjoin

strtrim:
	rm -f test/build/test_strtrim
	gcc $(LIB) test/tests/test_ft_strtrim.c  src/unity.c -o test/build/test_strtrim
	./test/build/test_strtrim

clean:
	rm -f test/build/*