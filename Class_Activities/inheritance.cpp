/*
    Name: Inheritance Example
    Author: Zaid Soomro
    About: This program was given by Sir Sajjad Ali in his Lab-12.
*/
#include <iostream>
using namespace std;
class Product{
    protected:
        string name, description;
        float price;
};
class Medicine : public Product{
    private:
        string mdate, edate;
    public:
        void setData(string nme, string des, float pric, string mgdate, string exdate){
            name = nme;
            description = des;
            price = pric;
            mdate = mgdate;
            edate = exdate;
        }
        void getData(){
            cout<<"Name: "<<name<<endl
                <<"Description: "<<description<<endl
                <<"Price: "<<price<<endl
                <<"Mfg: "<<mdate<<endl
                <<"Exp: "<<edate<<endl;
        }
};
class Book : public Product{
    protected:
        string Aname, edition;
    public:
        void setData(string nme, string des, float pric, string A_N, string ed){
            name = nme;
            description = des;
            price = pric;
            Aname = A_N;
            edition = ed;
        }
        void getData(){
            cout<<"Name: "<<name<<endl
                <<"Description: "<<description<<endl
                <<"Price: "<<price<<endl
                <<"Author: "<<Aname<<endl
                <<"Edition: "<<edition<<endl;
        }
};
int main(){
    Medicine fever;
    fever.setData("Brufen", "Syrup", 80, "15/4/2021", "15/4/2022");
    fever.getData();
    Book cpp;
    cpp.setData("OOP", "C++ Programming", 300, "Robert Lafore", "4th");
    cpp.getData();
    return 0;
}