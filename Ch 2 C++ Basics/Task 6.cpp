/*
	Robert lafore chapter 2 
	Task 6(CURRENCY converter)
	by Zameer Ali(20SW046)
*/
#include "iostream"
using namespace std;
int main(){
float dollar,pound,franc,german,yen;
cout<<"ENTER CURRENCY IN $";
cin>>dollar;
pound=dollar/1.487;
franc=dollar/0.172;
german=dollar/0.584;
yen=dollar/0.0095;
cout<<"currency in USA Dollars ="<<dollar<<"$"<<endl
<<"Equivalent currency in British  Pounds ="<<pound<<"pounds"<<endl
<<"Equivalent currency in French  Francs ="<<franc<<"francs"<<endl
<<"Equivalent currency in German Deutschemark ="<<german<<"Deutschemarks"<<endl
<<"Equivalent currency in French  Francs ="<<franc<<"francs"<<endl
<<"Equivalent currency in Japenese yens ="<<yen<<"yens"<<endl;
return 0;
}

