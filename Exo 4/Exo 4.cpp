#include "Exo 4.h"

int main(void) {
	TextRectangle rectangle1;
	rectangle1.setRectangle(5,5);
	rectangle1.getRectangle();
	rectangle1.print();
	rectangle1.drawArea('$');
	rectangle1.drawPerimeter('A');
	rectangle1.drawPerimeter('c');
	rectangle1.drawPerimeter(':');
}