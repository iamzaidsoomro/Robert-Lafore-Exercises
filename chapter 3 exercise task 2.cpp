//temperature conversion between two types of degrees Fahrenheit to Celsius and Celsius to Fahrenheit
#include <iostream>
using namespace std;
int main(){
	 int one_two;
	float temp,c;
	cout<<"TYPE  1 to convert Fahrenheit to Celsius or 2 to convert Celsius to Fahrenheit: ";
	cin>>one_two;
	if(one_two==1){
		cout<<"ENTER TEMPRATURE IN Fahrenhiet : ";
		cin>>temp;
		c=(temp-32)*5/9;
		cout<<"Entered temprature in Fahrenhiet is "<<temp<<" Which is equavalent to "<<c<<" celsius";
	}
	else if(one_two==2){
		cout<<"ENTER TEMPRATURE IN CELSIUS : ";
		cin>>temp;
		c=(temp*9/5)+32;
		cout<<"Entered temprature in celsius is "<<temp<<" Which is equavalent to "<<c<<" Fahrenhiet";
		
	}
		else {
			cout<<"invalid input use \"1 or 2\"";
		}
		
		
	 
	return 0;
}
