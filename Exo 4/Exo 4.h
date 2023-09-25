#pragma once
#include <iostream>

class Rectangle {
private:
	int width;
	int heigth;
public:
	Rectangle() {
		width = 10;
		heigth = 10;
		std::cout << width << std::endl;
	}
};

