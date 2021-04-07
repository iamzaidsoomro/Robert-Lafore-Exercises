/*
	Name: Bank System
	Developer: Zaid Soomro
	Copyright: @ZaidSoomro
	Date: 7/4/2021
	About: Class Activity held in extra lab of section 3 on 7/4/2021 conducted by Sir Sajjad Ali.
*/
#include <iostream>
using namespace std;
// =========================== Bank Account Class ===========================
class BankAccount{
	private:
		int accno;
		string customer;
		float balance;
		float withdraw;
		float deposit;
	public:
	// =========================== Methods for user interaction ===========================
		void CreateAccount(){ // Method allows user to create an account
			cout<<"Enter your name: ";
			getline(cin, customer);
			cout<<"Enter Account no: ";
			cin>>accno;
			cout<<"Balance: ";
			cin>>balance;
		} // CreateAccount() ends
		void AccountDetails(){ // This displays live information of clients account
			cout<<"Name: "<<customer<<endl
				<<"Account Number: "<<accno<<endl
				<<"Balance: $"<<balance<<endl;
		} // AccountDetails() ends
		void CheckBalance(){ // This allows user to check the current money available in his account
			cout<<"Current amount: $"<<balance<<endl;
		} // CheckBalance() ends
		void Withdraw(){ // This allows user to withdraw money from his account
			cout<<"Enter the amount you want to withdraw: ";
			cin>>withdraw;
			if(withdraw <= balance && withdraw >= 0){
				balance -= withdraw;
				cout<<'$'<<withdraw<<" withdrawn successfully!"<<endl;
				cout<<"Your current balance: $"<<balance<<endl;
			} // if statement ends
			else if(withdraw > balance){
				cout<<"Not enough money in your account!"<<endl;
			} // else if statement ends
			else if(withdraw<0){
				cout<<"Withdrawl amount can't be less than zero!"<<endl;
			} // else if statement ends
		} // Withdraw() ends
		void Deposit(){ // This allows the user to deposit money in his account
			cout<<"Enter the money you want to deposit: ";
			cin>>deposit;
			if(deposit>=0){
				balance += deposit;
				cout<<'$'<<deposit<<" added to your account successfully!"<<endl;
				cout<<"Your current balance is: $"<<balance<<endl;
			} // if statement ends
			else{
				cout<<"Deposit can't be less than zero!"<<endl;
			} // else statement ends
		} // Deposit() ends
}; // BankAccount class ends
// =========================== main() function ===========================
int main(){
	BankAccount first; // New Object created of class BankAccount
	first.CreateAccount();
	bool condition = true; // Condition set for further use
	while(condition == true){
		char choice;
		cout<<"\nWhat would you like to perform?\n1)Deposit\n2)Withdraw\n3)Account Details\n4)Check Balance\n0)EXIT"<<endl;
		cin>>choice;
		switch (choice)
		{
			case '0':
				condition = false;
				break;
			case '1':
				system("cls");
				first.Deposit();
				break;
			case '2':
				system("cls");
				first.Withdraw();
				break;
			case '3':
				system("cls");
				first.AccountDetails();
				break;
			case '4':
				system("cls");
				first.CheckBalance();
				break;
			default:
				system("cls");
				cout<<"Invalid Input!"<<endl;
				break;
		} // switch statement ends
	} // while loop ends
	return 0;
} // main() ends
