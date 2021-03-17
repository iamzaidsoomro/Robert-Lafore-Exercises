#include<iostream>
using namespace std;
int main ()
{
	int x;
	cout<<"enter the number : "<<endl;
	cin>>x;
	 if (x%2==0 && x!=0)
	 {
	 	cout<<--x;
	 }
	 else if (x==0)
	 {
	 	cout<<x+10;
	 }
	 else
	 {
	 	cout<<x*x;
	 }
}
