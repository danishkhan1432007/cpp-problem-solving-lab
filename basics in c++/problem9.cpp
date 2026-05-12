#include <iostream>
#include <cassert>
using namespace std;
int main (){
    float num1,num2;
    int  choice;
    cout<<"Enter the two integers \n ";
    cin>>num1>>num2;
    cout<<"Enter your choice for operation on these two integers \n";
    cout<<"  1- for addition \n  2- for subtraction \n  3- for multipication \n  4- for division \n";
    cin>>choice;
    switch (choice){
        case 1:
        cout<<"The sum of two integers is "<<num1 + num2;
        break;
        case 2:
        cout<<"The subtraction of two integers is "<<num1 - num2;
        break;
        case 3:
        cout<<"The multipication of two integers is "<<num1 * num2;
        break;
        case 4:
        //  Assert that num2 is not zero before performing division
        assert (num2 != 0 && "division by zero is not allowed !");
        cout<<"The division of two integers is "<<num1 / num2;
        break;
        default : 
        cout<<" invalid choice ";
    }
    return 0;

}