//fraction based four function calculator
#include <iostream>
using namespace std;
int main(){
	float a,b,c,d;
	char ch,sign,op;
	do{
	cout<<"enter first fraction : ";
	cin>>a>>sign>>b;
	cout<<"enter operator (-,+,/,*) : ";
	cin>>op;
	cout<<"enter second fraction : ";
	cin>>c>>sign>>d;
	if(b!=0 && d!=0){
	switch(op){
		case '+':
			cout<<"addition of your fractions is : "<<(a*d + b*c)<<sign<<(b*d)<<endl;
			break;
		case '-':
			cout<<"subtraction of your fractions is : "<<(a*d - b*c)<<sign<<(b*d)<<endl;
			break;
		case '*':
			cout<<"multiplication of your fractions is : "<<(a*c)<<sign<<(b*d)<<endl;
			break;
		case '/':
			if(c!=0)
			cout<<"division of your fractions is : "<<(a*d)<<sign<<(b*c)<<endl;
			break;
		default:
			cout<<"invalid operator"<<endl;
			break;
	}
}
		else{
			cout<<"in fraction zero cannot be used in denominator "<<endl;
		}
	cout<<"do you want to use calculator again press (y else n) : ";
	cin>>ch;	
}while(ch=='y'||ch=='Y');
	
	
	return 0;
}
