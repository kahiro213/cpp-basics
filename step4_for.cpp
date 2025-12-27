#include <iostream>
#include <vector>

int main() {
	std::vector<int> v = { 3, 1, 4 };

	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << std::endl;
	}
	return 0;
}