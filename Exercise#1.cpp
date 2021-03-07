#include <iostream>
using namespace std;

int main(){
	
	int numb, multiple = 1;
	
	cout << "Enter a number: ";
	cin >> numb;
	
	while(multiple <= 200){
		cout << numb*multiple << "\t";
		if(multiple%10 == 0){
			cout << endl;
		}
		multiple++;
	}
	
	return 0;
}
