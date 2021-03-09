/*
	Robert lafore chapter 4 
	Task 3 (Build structures to store values of length width and height and find volume)
	by Zameer Ali(046)
*/
	
#include <iostream>
using namespace std;
struct Distance{
	/*To storing variables such as feet or inch */
	int feet;
	float inches;      
};
struct volume{
	/*To storing types of distances */
	Distance length;
	Distance width;
	Distance height;
};

int main(){
	float l,w,h;
	volume object;
	cout<<"Enter Length of object in feet: ";
	cin>>object.length.feet;
	cout<<"Enter remaining Length of object in inches: ";
	cin>>object.length.inches;
	cout<<"Enter Width of object in feet: ";
	cin>>object.width.feet;
	cout<<"Enter remaining Width of object in inches: ";
	cin>>object.width.inches;
	cout<<"Enter Height of object in feet: ";
	cin>>object.height.feet;
	cout<<"Enter remaining Height of Object in inches: ";
	cin>>object.height.inches;
	l=object.length.feet+object.length.inches/12.0;
	w=object.width.feet+object.width.inches/12.0;
	h=object.height.feet+object.height.inches/12.0;
	cout<<"Volume of given object is: "<<l*w*h<<" cubic feet!";
	return 0;
	
}
