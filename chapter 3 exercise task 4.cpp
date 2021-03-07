// FOUR FUNCTION CALCULATOR with switch statement
#include <iostream>
using namespace std;
int main(){
char ch,op;
float num1,num2;
do{
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter any basic operators such as (+,-,*,/) : ";
	cin>>op;
	cout<<"Enter second number : ";
	cin>>num2;
		switch(op){
		case '+':
			cout<<"Addition of your numbers is : "<<num1+num2<<endl;
			break;
		case '-':
			cout<<"subtraction of your numbers is : "<<num1-num2<<endl;
			break;
		case '*':
			cout<<"Multiplication of your numbers is : "<<num1*num2<<endl;
			break;
		case '/':
			if(num2!=0)
			cout<<"Division of your first number by second is : "<<num1/num2<<endl;
			else
			cout<<"cannot divided by zero : maths error"<<endl;
			break;
		default:
			cout<<"only +,-,*,/ opprators are allowed to use"<<endl;
			break;
}
				cout<<"enter y to use again and n to terminate "<<endl;
				cin>>ch;
}while(ch=='y'||ch=='Y');//TO DO REPEATING IF USER WANT
	return 0;
}
