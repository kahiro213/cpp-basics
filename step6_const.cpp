#include <iostream>

int main() {
	int x = 5;
	const int y = 10;
	x = 7;
	std::cout << x << std::endl;
	std::cout << y << std::endl;
	return 0;
}