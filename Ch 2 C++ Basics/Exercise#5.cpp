/* 
	Book: Robert Lafore
	Chapter: 2
	Exercise: 5
	Developer: Zaid Soomro (20SW003)
*/
#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
	char ch;
	cout << "Enter a letter: "; cin >> ch;
	cout << islower(ch);
	return 0;
}
