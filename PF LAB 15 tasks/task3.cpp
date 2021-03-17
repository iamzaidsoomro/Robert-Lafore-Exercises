#include<iostream>
using namespace std;
int main ()
{
	int a,s,d;
	cout<<"enter first number : ";
	cin>>a;	
	cout<<"enter second number : ";
	cin>>s;
	cout<<"enter third number : ";
	cin>>d;
	if (a<s<d) 
		cout<<"increasing";

	else
		cout<<"decreasing";
	return 0;
}
