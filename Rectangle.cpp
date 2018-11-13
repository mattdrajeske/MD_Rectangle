#include "stdafx.h"
#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() {
	length = 0;
	width = 0;
}

Rectangle::Rectangle(double l, double w)
{
	l = length;
	w = width;
}

void Rectangle::setData() {
	cout << "Enter length: ";
	cin >> length;

	cout << "\nEnter width: ";
	cin >> width;
}

double Rectangle::perimeter() {
	return (2 * length) + (2 * width);
}

double Rectangle::area() {
	return length * width;
}

void Rectangle::showData() {
	cout << "\nThe rectangle's length is " << length;
	cout << "\nThe rectangle's width is " << width;
	cout << "\nThe rectangle's area is " << area();
	cout << "\nThe rectangle's perimeter is " << perimeter() << "\n";
}

//Rectangle::~Rectangle()
//{
//}
