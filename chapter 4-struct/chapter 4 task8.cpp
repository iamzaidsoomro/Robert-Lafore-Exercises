/*
	Robert lafore chapter 4 
	Task 8(Build structures to store numerator and denominator of fractions)
	by Zameer Ali(20SW046)
*/
#include <iostream>
using namespace std;
struct fraction{
	int numerator;
	int denominator;
	};// two members one will store numerator other will denominator of fraction
int main()
{
	fraction fraction1,fraction2,result;//variables of struct fraction 
	char sign_divion;// used to store sign of division (/)
		cout<<"Enter first fraction :";
		cin>>fraction1.numerator>>sign_divion>>fraction1.denominator;
		cout<<"Enter second fraction :";
		cin>>fraction2.numerator>>sign_divion>>fraction2.denominator;
	if(fraction1.denominator!=0 && fraction2.denominator !=0)
		{
		result.numerator=(fraction2.denominator*fraction1.numerator)+(fraction1.denominator*fraction2.numerator);
		result.denominator=fraction1.denominator*fraction2.denominator;
		cout<<"Sum of Fractions is ="<<result.numerator<<sign_divion<<result.denominator;
		}//will cheak if any denominator is not equals to zero then shows result  
			else cout<<"Result is undifined";//other wise shows result undifined
	return 0;
}
