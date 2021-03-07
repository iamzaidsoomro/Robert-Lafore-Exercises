/*
	Robert Lafore
	Exercise no 2
	Chapter 5
	by Zaid
*/

#include <iostream>
using namespace std;

double power(double numb, int expo);

int main(){
	double number;
	int exponent;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Enter power: ";
	cin >> exponent;
	cout << "Answer = " << power(number, exponent);
	return 0;
}

double power(double numb, int expo){
	double powered_value = 1;
	for(int i = 1; i <= expo; i++){
		powered_value *= numb;
	}
	return powered_value;
}

