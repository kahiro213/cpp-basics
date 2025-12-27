# include <iostream>

struct Point {
	int x;
	int y;
};

int main() {
	Point p;
	p.x = 3;
	p.y = 4;
	std::cout << p.x << std::endl;
	std::cout << p.y << std::endl;
	return 0;
}