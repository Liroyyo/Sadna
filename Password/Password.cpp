#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};



/*
	Because we are using a struct which is 17 bytes.
	16 bytes for the string and 1 for the bool
	so when i enter 16 chars then the 17 one will be '\0'
	and it will go over the size then it will make the bool be the opposite of its original value 
*/
int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}
