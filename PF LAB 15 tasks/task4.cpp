#include<iostream>
using namespace std;
int main ()
{
	char letter;
	cout <<"enter a character: ";
	cin >> letter;
	
	// Range of uppercase is 65 to 90
	// Range of lowercase is 97 to 122 
	int ascii_value = letter;
	
	if(ascii_value>=65 && ascii_value<=90)
		cout<<"uppercase";

	
	else if(ascii_value>=97 && ascii_value<=122)
		cout<<"lowercase";
	return 0;
}
