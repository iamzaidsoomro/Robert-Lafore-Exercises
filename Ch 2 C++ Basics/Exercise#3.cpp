/* 
	Book: Robert Lafore
	Chapter: 2
	Exercise: 3
	Developer: Zaid Soomro (20SW003)
*/
#include <iostream>
using namespace std;

int main(){
	const int numb = 10;
	int x = numb;
	x *= 2;
	cout << numb << endl << x << endl;
	cout << --x;
	return 0;
}
