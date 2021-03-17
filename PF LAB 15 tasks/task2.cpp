#include<iostream>
using namespace std;
int main()
{
	system("color A");
    int x,y,z;
	cout<<"classes attended: ";
	cin>>x;
	system("color E");
	cout<<"classes held: ";
	cin>>y;
	z= x*100/y;
	cout<<"your percentage of class attended is : "<<z<<"%"<<endl;
	 system("color F");
	 if (z>=75)
	{
		system("color C");
		cout << "you are allowed to sit in exam";	
	}
    else
    {
    	system("color B");
    	cout << "you are not allowed to sit in exam";
	}
 	return 0;
}
