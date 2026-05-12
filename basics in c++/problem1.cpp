#include<iostream>
#include <string>
using namespace std; 
int main(){
    string name;
    int age;
    int newage;
    cout<<"what is your name ? \n";
    getline(cin,name);
    cout<<"what is your age ? \n";
    cin>>age;
    newage = age + 10;
    cout<<"Hello "<<name<<" your age will be "<<newage<<" in the next 10 years \n";
    return 0;
}