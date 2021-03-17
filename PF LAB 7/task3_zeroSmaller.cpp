/*
  Name: Task#3 Zero Smaller
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro
  Date: 11/3/2021
  About program: This task was assigned by Sir Sajjad Ali. This program will change the small variable's value to zero
*/

#include <iostream>
using namespace std;

void zeroSmaller(int& numb1, int& numb2); // zerosmaller declared here with void return type and two int reference parameters

int main(){
	system("title Zero Smaller"); // This will change the title of console window
	system("color 70"); // This will change the console's background and font color
	int number_f; 
	int number_s;
	cout << "Enter first number: ";
	cin >> number_f;
	cout << "Enter second number: ";
	cin >> number_s;
	cout << "Before applying funtion: " << endl    
		 << "Value of first number is: " << number_f << endl
		 << "Value of second number is: " << number_s << endl << endl;
	zeroSmaller(number_f, number_s); // Called function will make the greater value equal to zero
	cout << "After applying function: " << endl
		 << "Value of first number is: " << number_f << endl
		 << "Value of second number is: " << number_s << endl;		
	return 0;
}

void zeroSmaller(int& numb1, int& numb2){ // zeroSmaller defined here. It needs cout to be printed at the time of call
	if(numb1 < numb2)
		numb1 = 0; // if first number is smaller, it becomes zero
	else if(numb2 < numb1)
		numb2 = 0; // if second number is smaller, it becomes zero
}

