/*
  Name:
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro
  Date:
  About program:
*/

#include <iostream>
using namespace std;

int max_two(int num1, int num2); // max_two() function of integer return type and two integer parameters declared here

int main(){
	system("title Swap()"); // This will change the title of console window
	system("color 70"); // This will change the console's background and font color
	int numb1, numb2; // These variables will hold user input
	cout << "Enter first number: ";
	cin >> numb1;
	cout << "Enter second number: ";
	cin >> numb2;
	cout << "Max = " << max_two(numb1, numb2) << endl; // max_two() function called here
	
	return 0;
}

int max_two(int num1, int num2){ // max_two() function defined here
	if(num1 > num2){
		return num1;
	} else{
		return num2;
	}
}
