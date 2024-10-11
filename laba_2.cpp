#include "TRectangle.h"
#include <iostream>
#include <Windows.h>
using namespace std;


int main() {
	//Перевірка другого класу

	TRectangle a(1, 3);
	TRectangle b;
	TRectangle c(a);


	cout << "First rectangle: ";
	a.output();
	cout << endl;
	cout << "Second rectangle: ";
	b.output();
	cout << endl;
	cout << "Third rectangle: ";
	c.output();
	cout << endl;

	b.input();
	cout << endl;

	cout << "Area of rectangle: " << c.getArea() << endl;
	cout << "Perimeter of rectangle: " << c.getPerimeter() << endl;

	cout << "Rectangles a and b are Equal: ";
	if (a == b) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

	cout << endl;

	cout << "Rectangles a and b are NotEqual: ";
	if (a != b) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

	cout << endl;

	cout << "Sum rectangles: ";
	TRectangle sumrect = a + c;
	sumrect.output();
	cout << endl;

	cout << "Difference of rectangles: ";
	TRectangle difrect = sumrect+b;
	difrect.output();
	cout << endl;

	cout << "Product of rectangle and number: ";
	TRectangle prodrect = c*5;
	prodrect.output();

	return 0;
}