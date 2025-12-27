#include <iostream>

int main() {
	int a = 5;
	int* p = &a;

	std::cout << a << std::endl;
	std::cout << *p << std::endl;
	return 0;
}