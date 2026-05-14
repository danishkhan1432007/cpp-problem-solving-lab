#include <iostream>
using namespace std;
int main(){
    int marks;
    int total = 0;
    cout<<"Please enter your (5) subject marks : \n";
    for(int i = 1;i <=5;i++){
        cout<<"Subject "<<i<<" marks: ";
        cin>>marks;
        total = marks +total;
    }

    cout<<"Total marks: "<<total<<endl;
    cout<<"Average marks:"<<total/5<<endl;
    return 0;
}