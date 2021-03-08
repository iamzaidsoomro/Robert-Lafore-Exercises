#include <iostream>
using namespace std;

int zeroSmaller(int num1, int num2);
char decor(char x, int iterations);

int main(){
	int numb1, numb2;
	cout << "Enter first number: ";
	cin >> numb1;
	cout << "Enter second number: ";
	cin >> numb2;
	
	cout << "Before applying function: " << endl << "Number A = " << numb1 << endl
		 << "Number B = " << numb2 << endl;
	decor('-', 20);
	cout << "After applying function: " << endl;
	zeroSmaller(numb1, numb2);
	return 0;
}

int zeroSmaller(int num1, int num2){
	if(num1 > num2){
		num2 = 0;
		cout << "Number A = " << num1 << endl << "Numebr B = " << num2 << endl;
	} else if(num1 < num2){
		num1 = 0;
		cout << "Number A = " << num1 << endl << "Number B = " << num2 << endl;
	} else{
		cout << "Numbers are equal!" << endl;
	}
}

char decor(char x, int iterations){
	for(int i = 1; i <= iterations; i++) cout << x;
	cout << endl;
}

