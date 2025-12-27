#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> v = { 3, 1, 4, 4 };
	std::sort(v.begin(), v.end());
	for (int x : v) {
		std::cout << x << std::endl;
	}
	return 0;
}