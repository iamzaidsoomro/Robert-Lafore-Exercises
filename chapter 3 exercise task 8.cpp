//adding two money values in old British system
#include <iostream>
using namespace std;
int main(){
	int pound1,shelling1,pence1,pound2,shelling2,pence2;
	int sumpd,sumsg,sumpe;
	char ch,point,pound=156;
	do{
	cout<<" Enter first amount in old british currency : ";
	cin>>pound1>>point>>shelling1>>point>>pence1;
	cout<<"Enter second amount in old british currency : ";
	cin>>pound2>>point>>shelling2>>point>>pence2;
		sumpd=pound1+pound2;
		sumsg=shelling1+shelling2;
		sumpe=pence1+pence2;
		while(sumpe>=12){
			sumsg++;
			sumpe-=12;
		}//used this because after 12 pence it changed into shilling 
		while(sumsg>=20){
			sumpd++;
			sumsg-=20;
		}//used this because after 20 shilling it changed into pound 
	cout<<"The total is : "<<pound<<sumpd<<point<<sumsg<<point<<sumpe<<endl;
		cout<<"Do you wish to continue (y/n)? ";
		cin>>ch;
		}while(ch=='y'||ch=='Y');//for try again
					
	return 0;
}
