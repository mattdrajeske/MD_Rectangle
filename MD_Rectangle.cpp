// MD_Rectangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Rectangle.h"
#include <iostream>
#include <string>

using namespace std;

//bool equals(string, string);

int main()
{
	string cont;
	string test = "yes";
	bool stop = false;

	while(!stop){ //loops until stop condition
		Rectangle rect;
		rect.setData();
		rect.showData();

		cout << "Enter yes to continue: ";
		cin >> cont;
		for (int i = 0; i < cont.length(); i++) {
			if (isupper(cont[i])) {        //checks if the string the user put in equals yes with any capitalization
				cont[i] = tolower(cont[i]);
			}
			if (cont[i] != test[i]) { //user did not input yes, and therefore does not want to continue program
				stop = true;		  //need variable so that outer loop will also stop
				break;
			}
		}
		//cout << cont << endl;
	}
	return 0;
}


