/*
	Book: Robert Lafore
	Chapter: 5 Functions
	Exercise: 8
	Developer: Zaid Soomro (20SW003)
*/

#include <iostream>
using namespace std;

void swap(int y, int x); // swap() function is declared here which will show you two swaped variables
void decor(char ch, int itr); // This function is not the requirement of task but I have created it for a better user interface
int main(){
	system("title swap() function"); // This will change the title of the console window
	int numb1, numb2;
	cout << "Enter first number: "; cin >> numb1;
	cout << "Enter second number: "; cin >> numb2;
	cout << "Before swapping" << endl;
	decor('-', 20);
	cout << "First number = " << numb1 << endl << "Second number = " << numb2 << endl;
	decor('-', 20);
	cout << "After swapping: " << endl;
	decor('-', 20);
	swap(numb2, numb1);
	return 0;
} // main() ends here

void swap(int y, int x){
	cout << "First number = " << y << endl;
	cout << "Second number = " << x << endl;
} // swap() ends here
void decor(char ch, int itr){
	for(int i = 1; i <= itr; i++){
		cout << ch;
	} // for loop ends here
	cout << endl;
} // decor() ends here
