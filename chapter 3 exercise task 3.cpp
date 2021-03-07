//get 6 number digits with help of getchar
// and show result 
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
char ch;
long a;
cout<<"Enter a number : ";
for(int i=1; i<7; i++){
	ch=getche();
	a=a*10+ch-48;}
	cout<<endl<<"NUMBER IS : " <<a;	
	return 0;
}
