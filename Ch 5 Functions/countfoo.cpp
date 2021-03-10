/*
	Book: Robert Lafore
	Chapter: 5 Functions
	Exercise: 10
	Developer: Zaid Soomro (20SW003)
*/

#include <iostream>
using namespace std;

void foo();
int count = 0;
int main(){
	foo();
	foo();
	foo();
	foo();
	foo();
	foo();
	foo();
	foo();
	foo();
	foo();
	cout << "I have been called " << count << " times!" << endl;
	return 0;
}

void foo(){
	count++;
}
