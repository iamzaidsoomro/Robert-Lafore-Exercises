#include <iostream>
using namespace std;
class BankAccount{
	private:
		int accno;
		string customer;
		int balance;
		int withdraw;
		int deposit;
	public:
		void CreateAccount(){
			cout<<"Enter your name: ";
			getline(cin, customer);
			cout<<"Enter Account no: ";
			cin>>accno;
			cout<<"Balance: ";
			cin>>balance;
		}
		void AccountDetails(){
			cout<<"Name: "<<customer<<endl
				<<"Account Number: "<<accno<<endl
				<<"Balance: "<<balance<<endl;
		}
		void CheckBalance(){
			cout<<balance<<endl;
		}
		void Withdraw(){
			cout<<"Enter the amount you want to withdraw: ";
			cin>>withdraw;
			if(withdraw <= balance){
				balance -= withdraw;
				cout<<'$'<<withdraw<<" withdrawn successfully!"<<endl;
				cout<<"Your current balance: "<<balance<<endl;
			}
			else{
				cout<<"Not enough money in your account!"<<endl;
			}
		}
		void Deposit(){
			cout<<"Enter the money you want to deposit: ";
			cin>>deposit;
			if(deposit>=0){
				balance += deposit;
				cout<<'$'<<deposit<<" added to your account successfully!"<<endl;
				cout<<"Your current balance is: $"<<balance<<endl;
			}
			else{
				cout<<"Deposit can't be less than zero!"<<endl;
		}
};
int main(){
	BankAccount first;
	first.CreateAccount();
	bool condition = true;
	while(condition == true){
		char choice;
		cout<<"What would you like to perform?\n1)Deposit\n2)Withdraw\n3)Account Details\n4)Check Balance\n0)EXIT"<<endl;
		cin>>choice;
		switch (choice)
		{
			case '0':
				condition = false;
				break;
			case '1':
				first.Deposit();
				break;
			case '2':
				first.Withdraw();
				break;
			default:
				cout<<"Invalid Input!"<<endl;
				break;
		}
	}
	return 0;
}