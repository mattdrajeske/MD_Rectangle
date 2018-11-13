#pragma once
class Rectangle
{
	public:
		double length;
		double width;
	
	private:
		Rectangle();
		Rectangle(double, double);
		void setData();
		double perimeter();
		double area();
		void showData();

		//~Rectangle();
};

