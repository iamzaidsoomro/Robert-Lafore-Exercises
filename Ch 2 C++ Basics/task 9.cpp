 /*
	Robert lafore chapter 2
	Task 9(Addition of two fractions )
	by Zameer Ali(20SW046)
*/
#include "iostream"
using namespace std;
int main(){
	int num1,num2,num3,num4;
	char signdiv;
		cout<<"Enter first fraction"<<endl;
		cin>>num1>>signdiv>>num2;
		cout<<"Enter second fraction"<<endl;
		cin>>num3>>signdiv>>num4;
		cout<<"Addition of your fractions is :"<<(num1*num4)+(num2*num3)<<signdiv<<num2*num4;
	return 0;
}

