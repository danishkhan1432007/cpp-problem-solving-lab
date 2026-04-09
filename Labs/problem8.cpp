#include <iostream>
using namespace std;
int main (){
    int marks;
    cout<<"Enter your marks \t ";
    cin>>marks;
    switch (marks/10)
    {
    case 9:
        cout<<"Your grade is A+ ";
        break;
    case 8:
        cout<<"Your grade is A ";
        break;
    case 7:
        cout<<"Your grade is B ";
        break;
    case 6:
        cout<<"Your grade is C ";
        break;
    case 5:
        cout<<"Your grade is D ";
        break;
    default:
        cout<<"Your are failed ";
    }
    return 0;
}