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
