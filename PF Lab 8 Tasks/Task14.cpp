/*
==============================================================================================================
  Name: Task 14 Lab 8: Insert Function
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro
  Date: 24/3/2021
  About program: This task was assigned by Sir Sajjad Ali. This program will insert values in array using
  function
==============================================================================================================
*/
#include <iostream>
using namespace std;
/*
===================== Declarations =====================
*/
const int total_users = 5; // Number of users
const int user_data = 2; // userid and password index
string usernames_passwords[total_users][user_data] = { // 2D array storing number of users and information
    {"iamtom", "thisispass"},
    {"iamjerry", "jerry123"},
    {"spike107", "woogiewoogie"},
    {"vaas_00", "insane69"},
    {"johnnybravo69", "iamjohnny96"}
    }; // array ends
string username, password; // for storing user input
bool check(string username, string password, string array[total_users][user_data]); // Check id & password
/*
===================== Main() Function =====================
*/
int main(){
    while(true){ // while condition is true
        cout<< "Enter Username: "; 
        cin>> username; // get username
        cout<< "Enter Password: "; 
        cin>> password; // get password
        if(check(username, password, usernames_passwords) == true){ // if username, password matches
            system("cls"); // clear junk
            cout<<"Hi " << username <<"!"<< endl; // greet user
            break; // terminate loop
        } // if statement ends
        else{
            cout<<"Username or password is wrong!"<<endl; // show this msg
            continue; // repeat until passwords do not match
        } // else ends
    } // while loop ends
    return 0;
} // main() ends
/*
===================== Definitions =====================
*/
bool check(string username, string password, string array[total_users][user_data]){ 
    for(int i=0; i<total_users; i++){ // iterate over first dimension
        for (int j = 0; j < user_data; j++){ // iterate over second dimension
            if(username == array[i][j] && password == array[i][j+1]){ // check for data match
                return true; // if matches, return true
            } // if statement ends    
        } // nested for loop ends
    } // main for loop ends
} // check() ends
