/*
	Class activity given by Dr Naeem Mahoto
	Developer: Zaid Ahmed
	Four Function calculator using functions() for each operation
	Date: 8/3/2021
*/

#include <iostream>
using namespace std;

float sum(float x, float y);
float diff(float x, float y);
float product(float x, float y);
void div(float x, float y);

int main(){
	char ch = 'y';
	while(tolower(ch) == 'y'){
		float num1, num2;
		char op;
		cout << "Enter first number: ";
		cin >> num1;
		cout << "Enter second number: ";
		cin >> num2;
		cout << "Enter operator: ";
		cin >> op;
		switch(op){
			case '+':
				cout << "Sum: " << sum(num1, num2);
				break;
			case '-':
				cout << "Difference: " << diff(num1, num2);
				break;
			case '*':
				cout << "Product: " << product(num1, num2);
				break;
			case '/':
				cout << "Division: "; div(num1, num2); // Please don't use cout when calling div() function otherwise output will go against predictions
				break;
			default: cout << "Invalid data!";
		}
	cout << "\nWould you like to perform it again? (Y/N): ";
	cin >> ch;
}
	return 0;
}

float sum(float x, float y){ // This function is for addition
	float result;
	result = x + y;
	return result;
}
float diff(float x, float y){ // This function is for subtraction
	float result;
	result = x - y;
	return result;
}
float product(float x, float y){ // This function is for multiplication
	float result;
	result = x * y;
	return result;
}
void div(float x, float y){ // This function is for division
	float result;
	if(y == 0){
		string infinity;
		infinity = "Undefined";
		cout << infinity;
	} else{
		result = x/y;
		cout << result;
	}
}

