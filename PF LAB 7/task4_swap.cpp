/*
  Name: Task#4 swap()
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro
  Date: 11/3/2021
  About program: This task is assigned by Sir Sajjad Ali. This program will swap two variables using swap() funciton
*/

#include <iostream>
using namespace std;

void swap(int& numb1, int& numb2); // swap() function with void return type which takes two reference integer parameters declared here

int main(){
	system("title Swap()"); // This will change the title of console window
	system("color 70"); // This will change the console's background and font color
	int num1, num2;
	cout << "Enter first number: "; 
	cin >> num1;
	cout << "Enter second number: "; 
	cin >> num2;
	cout << "Before applying function:" << endl
		 << "Number i = " << num1 << endl
		 << "Number ii = " << num2 << endl << endl;
	swap(num1, num2); // swap() function called here
	cout << "After applying function:" << endl
		 << "Number i = " << num1 << endl
		 << "Number ii = " << num2 << endl;
	return 0;
}
void swap(int& numb1, int& numb2){ // swap() function defined here
	int temp = numb1; // This temporary variable will hold numb1 value which will be later given to numb2
	numb1 = numb2; // Value of numb2 given to numb1
	numb2 = temp; // value of temp (that is numb1) given to numb2
}

