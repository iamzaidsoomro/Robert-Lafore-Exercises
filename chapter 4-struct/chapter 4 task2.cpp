/* 
chapter 4 task 2
by ZAMEER ALI(046)
construct structure contain x-axis and y-axis*/
#include <iostream>
using namespace std;
struct point{
	int x_coordinate;
	int y_coordinate;
	};
int main(){
	point p1,p2,presult;//variables of structure
		cout<<"Enetr x coordinate of first point : ";
		 cin>>p1.x_coordinate;
		cout<<"Enetr y coordinate of first point : ";
		 cin>>p1.y_coordinate;
		cout<<"Enetr x coordinate of second point : ";
		 cin>>p2.x_coordinate;
		cout<<"Enetr y coordinate of second point : ";
		 cin>>p2.y_coordinate;
		 presult.x_coordinate=p1.x_coordinate+p2.x_coordinate;
		 presult.y_coordinate=p1.y_coordinate+p2.y_coordinate;
		 
	cout<<"Coordinates of point 1 are : ("<<p1.x_coordinate<<","
	<<p1.y_coordinate<<")"<<endl;
	cout<<"Coordinates of point 2 are : ("<<p2.x_coordinate<<","
	<<p2.y_coordinate<<")"<<endl;
	
	cout<<"Coordinates of point 1+2 are : ("<<presult.x_coordinate<<","
	<<presult.y_coordinate<<")";
return 0;
}

