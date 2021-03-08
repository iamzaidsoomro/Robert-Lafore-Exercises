/* 
chapter 4 task 1
by ZAMEER ALI(046)
construct structure contain parts of phone number */
#include <iostream>
using namespace std;
struct phone{
	int areacode;
	int exchange;
	int number;
	};
int main(){
	phone my,your;//variables of structure
		cout<<"Enter areacode of your phone : "; cin>>your.areacode;

		cout<<"Enter exchange of your phone : "; cin>>your.exchange;

		cout<<"Enter number of your phone : "; cin>>your.number;
		my.areacode=781;
		my.exchange=527;
		my.number=5286;
	cout<<"My phone number is   ("<<my.areacode<<")"<<my.exchange<<" "<<my.number<<endl;
	cout<<"Your phone number is ("<<your.areacode<<") "<<your.exchange<<" "<<your.number<<endl;
	
return 0;
}

