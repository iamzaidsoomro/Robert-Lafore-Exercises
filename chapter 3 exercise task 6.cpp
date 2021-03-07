//find factorial of any number 
//until user press 0
#include <iostream>
using namespace std;
int main(){
	int num,factorial,i;
	cout<<"Enter a number to find factorial of that number : ";
	cin>>num;
	do{
			factorial=1;//initial value for factorial
		for(i=num; i>0; i--){
			factorial=factorial*i;//to change value of factorial for next multiplication
			}
			cout<<"Factorial is :"<<factorial<<endl;
			cout<<"input other number to find factorial of that or 0 to terminate : ";
			cin>>num;
				}while(num!=0);
	return 0;
}
