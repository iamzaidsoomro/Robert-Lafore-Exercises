#include <iostream>
using namespace std;

int main(){
	float cel, fahr;
	char dec;
	
	do{
		cout << "Enter 1 to convert Celsius to Fahrenheit" << endl; 
		cout << "Enter 2 to convert Fahrenheit to Celsius" << endl;
		cin >> dec;
		switch(dec){
			case '1':
				cout << "Enter temprature in Celsius: ";
				cin >> cel;
				fahr = (cel*9/5) + 32;
				cout << "Temprature in Fahrenheit is: " << fahr << " F" << endl;
				break;
			case '2':
				cout << "Enter temprature in Fahrenheit: ";
				cin >> fahr;
				cel = (fahr - 32)*5/9;
				cout << "Temprature in Celsius is: " << cel << " C" << endl;
				break;
			default:
				cout << "Invalid input!";
				break;
		}	
		cout << "Would you like to do it again? (Y/N): ";
		cin >> dec;
	} while(dec == 'y');

	return 0;
}

