#include <iostream>
#include <string>
using namespace std;
int main (){
    int age;
    string name;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"Enter your age : ";
    cin>>age;
    if (age >= 18){
        cout<<name<<" you are eligible for driving license ";
    }
    else {
        cout<<"Sorry "<<name<<" you are not eligible for driving license ";
    }

    return 0;
}