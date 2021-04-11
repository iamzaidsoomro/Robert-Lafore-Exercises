/*
============================================================================================================================================
    Name: Task#5 use of static, setter, getter and public private access specifiers
    Student: Zaid Ahmed Soomro 20SW003
    About: This task was assigned was Sir Sajjad Ali. This program will set and get the student data
============================================================================================================================================
*/
#include <iostream>
using namespace std;
// ================================================== Record Class =================================================
class Record{
    private: // Access specifier used (Task)
        // Private Fields
        int srno = 0;
        string firstname;
        string lastname;
        int age;
        string deptt;
        int semester;
        float cgpa;
    public: // Access Specifier used (Task)
        void setAttributes(){ // setter (Task)
            static int temp = 0; // Static data member used
            cout<<"Enter First-Name: ";
            getline(cin, firstname);
            cout<<"Enter Last-Name: ";
            getline(cin, lastname);
            cout<<"Enter Age: ";
            cin>>age;
            cin.ignore();
            cout<<"Enter Department: ";
            getline(cin, deptt);
            bool semCon = true;
            while(semCon == true){
                cout<<"Enter semester: ";
                cin>>semester;
                cin.ignore();
                semCon = (semester >= 1 && semester <= 8) ? false:true;
                if(semCon == true){
                    cout<<"Invalid Data!"<<endl;
                    continue;
                } // if statement ends
            } // while loop ends
            cout<<"Enter your CGPA: ";
            cin>>cgpa;
            cin.ignore();
            temp++;
            srno = temp;
            system("cls");
        } // setAttributes() ends
        void getAttributes(){ // Getter (Task)
            cout<<"Sr no: "<<srno<<endl
                <<"Name: "<<firstname<<" "<<lastname<<endl
                <<"Age: "<<age<<endl
                <<"Department: "<<deptt<<endl
                <<"Semester: "<<semester<<endl
                <<"CGPA: "<<cgpa<<endl<<endl;
        } // getAttributes() ends
        Record(){
            setAttributes();
        } // Record() ends
}; // 
// ================================================== main() Function =================================================
int main(){
    Record student1; // object created
    Record student2; // object created
    Record student3;  // object created
    // Data displayed using getter
    student1.getAttributes();
    student2.getAttributes();
    student3.getAttributes();
    return 0;
} // main() ends