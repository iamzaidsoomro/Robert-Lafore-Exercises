#include<iostream>
using namespace std;
int main()
{
   float x, y, z, a, per;
   cout <<"Enter marks of c++ : ";
   cin>>x;
   cout <<"Enter marks of FE : ";
   cin>>y;
   cout <<"Enter marks of EE : ";
   cin>>z;
   
   cout <<"Total marks obtained out of 300 is: "<<x+y+z<<endl;

   a=x+y+z;
   cout<<"Your percentage is: " <<a*100/300<<"%"<<endl;
   per=a*100/300;
   
   if (per>=90)
   {
   	cout << "Your grade is: A";
   }
   else if (per<90 && per>=80)
   {
   	cout << "Your grade is: B";
   }
   else if (per<80 && per>=70)
   {
   	cout << "Your grade is: C";
   }
   else if (per<70 && per>=60)
   {
   	cout << "Your grade is: D";
   }
   	else if (per<60)
   {
   	cout << "fail";
   }
}
