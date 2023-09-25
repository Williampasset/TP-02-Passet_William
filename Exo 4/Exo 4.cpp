#include "Exo 4.h"

int main(void) {
	TextRectangle rectangle1;
	rectangle1.setRectangle(9,9);
	rectangle1.getRectangle();
	rectangle1.print();
	rectangle1.drawArea('$');
	cout << endl;
	rectangle1.drawPerimeter('A');
}