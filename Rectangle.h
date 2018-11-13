#pragma once
//#include "stadfx.h"
class Rectangle
{
	private:
		double length;
		double width;
	
	public:
		Rectangle();
		Rectangle(double, double);
		void setData();
		double perimeter();
		double area();
		void showData();

		//~Rectangle();
};

