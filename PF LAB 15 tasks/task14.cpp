#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter pay: ";
	cin>>x;
	if (x>=10000 && x<20000)
	{
		cout<<"Manager Operations";
	}

    else if (x>=20000 && x<30000)
	{
		cout<<"Manager";
	}
	else if (x>=30000 && x<40000)
	{
		cout<<"Area Manager";
	}
	else if (x>=40000 && x<50000)
	{
		cout<<"Regional Operations";
	}
}
