#include <iostream>
using namespace std;
class Tea{
    private:
        float sugar, water, milk, teadust;
    public:
        void showTea(){
            cout<<"Sugar = "<<sugar<<"grams"<<endl
                <<"Water = "<<water<<"grams"<<endl
                <<"Milk = "<<milk<<"grams"<<endl
                <<"Teadust = "<<teadust<<"grams"<<endl;
        }  
        void makeTea(float sqty, float wqty, float mqty, float tqty){
            cout<<"Enter sugar grams: ";
            cin>>sqty;
            cout<<"Enter Water grams: ";
            cin>>wqty;
            cout<<"Enter Milk grams: ";
            cin>>mqty;
            cout<<"Enter Teadust grams: ";
            cin>>tqty;
            if(sqty >= 0 && wqty >= 0 && mqty >= 0 && tqty >= 0){
                sugar = sqty;
                water = wqty;
                milk = mqty;
                teadust = tqty;
                system("cls");
                showTea();
                cout<<"\nTea is ready!"
            }
            else{
                cout<<"Values can't be less than zero!"<<endl;
            }
        }
};
int main(){
    Tea myTea;
    myTea.makeTea(6.5,1.7, 8.8, 1.7);
    return 0;
}
