//calculate the final amount after interest rate
#include <iostream>
#include <cmath>//for using power function
using namespace std;
int main(){
	float initial,year,rate,result;
	cout<<"Enter initial amount : ";
	cin>>initial;
	cout<<"Enter number of years : ";
	cin>>year;
	cout<<"Enter intrest rate % per anum : ";
	cin>>rate;
	result=initial*pow((1+rate/100),year);//total final
	cout<<"At the end of  "<<year<<" years, you will have "<<result<<" rupees"<<endl;
	for(int i=1; i<year; i++){
	result=initial*(1+rate/100);//final after each year
	cout<<"At the end of "<<i<<" year you will have "<<initial<<"+( "<<initial<<"*"<<rate/100<<")"
		<<" which is equals to "<<result<<" rupees"<<endl;
		initial=result;//for next year initital will be changed due to interest of first year so on
}
	return 0;
}
