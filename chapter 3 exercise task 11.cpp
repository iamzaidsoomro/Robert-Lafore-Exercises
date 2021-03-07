// to get 3 function calculator of money adding subtracting and multiplied by number
#include <iostream>
using namespace std;
int main(){
	int pound1,shelling1,pence1,pound2,shelling2,pence2;
	int sumpd,sumsg,sumpe;
	float f,m,m2;
	char op,point,pound=156;
	cout<<"Enter oprator (+,-,*) : ";
	cin>>op;
	if(op=='-'||op=='+'){
	cout<<" Enter first amount in old british currency : ";
	cin>>pound1>>point>>shelling1>>point>>pence1;
	cout<<"Enter second amount in old british currency : ";
	cin>>pound2>>point>>shelling2>>point>>pence2;
		switch(op){
			case '+':{
			
		sumpd=pound1+pound2;
		sumsg=shelling1+shelling2;
		sumpe=pence1+pence2;
		while(sumpe>=12){
			sumsg++;
			sumpe-=12;
		}
		while(sumsg>=20){
			sumpd++;
			sumsg-=20;
		}
		cout<<"The total is : "<<pound<<sumpd<<point<<sumsg<<point<<sumpe<<endl;
				break;}

		case '-':{
			
		sumpd=pound1-pound2;
		sumsg=shelling1-shelling2;
		sumpe=pence1-pence2;
		if(sumpe<0){
			sumsg--;
			sumpe+=12;
		}
		if(sumsg<0){
			sumpd--;
			sumsg+=20;
		}
		cout<<"The total is : "<<pound<<sumpd<<point<<sumsg<<point<<sumpe<<endl;
				break;}
	}
}
		else if(op=='*'){
			cout<<" Enter  amount in old british currency : ";
			cin>>pound1>>point>>shelling1>>point>>pence1;
			cout<<"enter a number : ";
			cin>>f;
			m=float(pound1*f);
			sumpd=(int)m;
			m=float(m)-(sumpd);
			m=m*20;
			m2=float((shelling1+m)*f);
			sumsg=int(m2);
			m2=float(m2)-(sumsg);
			m2*=12;
			sumpe=float((pence1+m2)*f);
			sumpe=int(sumpe);	
			while(sumpe>=12){
			sumsg++;
			sumpe-=12;
		}
			while(sumsg>=20){
			sumpd++;
			sumsg-=20;
		}
		cout<<"The total is : "<<pound<<sumpd<<point<<sumsg<<point<<sumpe<<endl;
		}
		else {
			cout<<"invalid oprator ";
		}
		return 0;
}
