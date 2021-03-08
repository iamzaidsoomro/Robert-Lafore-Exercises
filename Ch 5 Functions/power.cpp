/*
	Robert Lafore
	Exercise no 2
	Chapter 5
	by Zaid
*/

#include <iostream>
using namespace std;

double power(double numb, int expo=2);//default argument given(2)

int main(){
	double number;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Square of your number Answer= " << power(number);
	return 0;
}

double power(double numb, int expo){
	double powered_value = 1;
	for(int i = 1; i <= expo; i++){
		powered_value *= numb;
	}
	return powered_value;
}

