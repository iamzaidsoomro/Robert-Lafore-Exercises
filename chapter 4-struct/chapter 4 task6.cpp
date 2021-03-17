/*
Robert lafore chapter 4 
Task 6(Build enum etype to store { laborer, secretary, manager, accountant, executive,researcher }
as members then it ask for first letter of field then show full name of respective field)
by Zameer Ali(20SW046)
*/
#include "iostream"
using namespace std;
	//enum defined here
	enum etype {_,laborer, secretary, manager, accountant, executive,researcher };
	
	int main()
	{
	etype type;//variable of etype enum 
	char choose;
	cout<<"Enter employee type (first letter only) laborer, secretary, manager,accountant, executive, researcher):"<<endl;
	cin>>choose;
	switch(choose){
	case 'l':
		type=laborer; //assiging value to enum
		break;
	case 's':
		type=secretary;	//assiging value to enum 
		break;
	case 'm':
		type=manager; //assiging value to enum
		break;
	case 'a':
		type=accountant; //assiging value to enum
		break;
	case 'e':
		type=executive; //assiging value to enum
		break;
	case 'r': //assiging value to enum
		type=researcher; 
		break;
		default:
		cout<<"Invalid input";
		break;
			}
			/*enum store values only in counting for example if here type=laborer; 
			then if anyone cout<<type; it will show 1 in result 
			because laborer is at firstposition position in our enum so to call full name again
			we should add condition statements  */
switch(type){
	case 1:
		cout<<"Employee type is laborer"; 
		break;
	case 2:
		cout<<"Employee type is secretary"; 
		break;
	case 3:
   		cout<<"Employee type is manager"; 
		break;
	case 4:
		cout<<"Employee type is accountant"; 
		break;
	case 5:
		cout<<"Employee type is executive";
		break;
	case 6:
		cout<<"Employee type is researcher"; 
		break;
	}
		return 0;
}
