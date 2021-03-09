/*
	Book: Robert Lafore
	Chapter: 5
	Exercise: 7
	Developer: Zaid Soomro
*/

#include <iostream>
#include <conio.h>
using namespace std;

// Declared functions here

double power(double numb, int expo);
int power(char numb, int expo);
int power(int numb, int expo);
float power(float numb, int expo);

int main(){
	char ch = 'y';
	while(ch == 'y' || ch == 'Y'){
		cout << "What data type will you use? Press:\n1 int\n2 char\n3 float\n4 double" << endl;
		char choice = getch();
		switch(choice){
			case '1':
				int number1, exponent1;
				cout << "Enter number: "; cin >> number1;
				cout << "Enter Power: "; cin >> exponent1;
				cout << "Result = " << power(number1, exponent1) << endl;
				break;
			case '2':
				char number2; int exponent2;
				cout << "Enter number: "; cin >> number2;
				cout << "Enter power: "; cin >> exponent2;
				cout << "Result = " << power(number2, exponent2) << endl;
				break;
			case '3':
				float number3; int exponent3;
				cout << "Enter a number: "; cin >> number3;
				cout << "Enter power: "; cin >> exponent3;
				cout << "Result = " << power(number3, exponent3) << endl;
				break;
			case '4':
				double number4; int exponent4;
				cout << "Enter a number: "; cin >> number4;
				cout << "Enter power: "; cin >> exponent4;
				cout << "Result = " << power(number4, exponent4) << endl;
				break;
			default:
				cout << "Invalid input!" << endl;
				break;
		} // Switch terminated
		cout << "Would you like to do it again? (Y/N): "; cin >> ch;
	} // while loop terminated
	return 0;
} // main function terminated

// funtions are defined here

int power(int numb, int expo){
	int temp = 1;
	for(int i = 1; i <= expo; i++){
		temp *= numb;
	} // for loop terminated
	return temp;
} // power function terminated

int power(char numb, int expo){ 
	numb -= '0';
	int temp = 1;
	for(int i = 1; i <= expo; i++){
		temp *= numb;
	} // for loop terminated
	return temp; // return type integer is used because if we use character, it will return ASCII character
} // power function terminated

float power(float numb, int expo){
	float temp = 1;
	for(int i = 1; i <= expo; i++){
		temp *= numb;
	} // for loop terminated
	return temp;
} // power function terminated

double power(double numb, int expo){
	double temp = 1;
	for(int i = 1; i <= expo; i++){
		temp *= numb;
	} // for loop terminated
	return temp;
} // power function terminated

