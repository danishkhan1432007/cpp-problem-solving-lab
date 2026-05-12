#include <iostream>
using namespace std;
int main (){
    char grade;
    cout<<"Enter your Grades of the first semester : ";
    cin>>grade;
    switch (grade)
    {
    case 'A':
        cout<<"your GPA of the first semester is 4.0 ";
        break;
    case 'B':
        cout<<"your GPA of the first semester is 3.0 ";
        break;
    case 'C':
        cout<<"your GPA of the first semester is 2.0 ";
        break;
    case 'D':
        cout<<"your GPA of the first semester is 1.0 ";
        break;
    case 'E':
        cout<<"your GPA of the first semester is 0.0 ";
    default:
        cout<<"The Grade is invalid.";
        break;
    }
    return 0;
}