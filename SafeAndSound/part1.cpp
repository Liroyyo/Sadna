#include "part1.h"
#include <iostream>

char* string_copy(char dest[], int destsize, char* src)
{
	char* ret = dest;
	int i = 0;
	while (i < destsize - 1 && (*dest++ = *src++)) {
		i++;
	}
	*dest = '\0';
	return ret;
}

void part1()
{
	char password[] = "secret";
	char dest[13];
	char src[] = "hello world!";

	string_copy(dest, 13, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
