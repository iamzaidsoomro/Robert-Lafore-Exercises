#include<iostream>
using namespace std;
int main ()
{
	int numb1,numb2,numb3;
	cout<<"enter first number : ";
	cin>>numb1;
	
	cout<<"enter second number : ";
	cin>>numb2;
	
	cout<<"enter third number : ";
	cin>>numb3;

	 if (numb1>numb2 & numb3)
	 {
	 	cout<< "greatest number is: "<<numb1;
	 }
	 
	 else if (numb2>numb1 & numb3)
	 {
	 	cout<< "greatest number is: "<<numb2;
	 }
	 else if (numb3>numb2 & numb1)
	 {
	 	cout<< "greatest number is: "<<numb3;
	 }
	 else if (numb1=numb2 = numb3)
	 {
	 	cout<< "all numbers are equal: "<<numb1;
	 }
	 
	 
	 
}
