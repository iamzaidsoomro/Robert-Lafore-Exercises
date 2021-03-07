/*
	Program = Area of circle
	from Roebrt Lafore's chapter 5
	exercise 1
	Made by Zaid
*/

#include <iostream>
using namespace std;

float circarea(float radius); // Declaring a function here which will be defined later in the program

int main(){
	float radius;
	cout << "Enter radius of the circle: ";
	cin >> radius;
	cout << "Area = " << circarea(radius);
}

float circarea(float radius){	// Function for calculating circle's area
	float area = radius*radius;
	area *= 3.14;
	return area;
}

