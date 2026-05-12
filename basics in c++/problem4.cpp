#include <iostream>
using namespace std;
int main (){
    int marks;
    cout<<"Enter the marks of your exam so that I can calculate your grade according to your given marks \n";
    cout<<"The marks should be between 1 to 100 \n";
    cin>>marks;
    if (marks >= 90){
        cout<<"Congratulations your grade is 'A' ";
    }
    else if (marks >= 80 ){
        cout<<"Congratulations your grade is 'B' ";
    }
    else if (marks >= 70){
        cout<<"Your grade is 'C' ";
    }
    else if (marks >= 60){
        cout<<"Your grade is 'D' ";
    }
    else {
        cout<<"Your grade is 'F' ";
    }
    return 0;
}