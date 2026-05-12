#include <iostream>
using namespace std;
int main(){
    double  num;
    cout<<"Enter the initial deposit amount: ";
    cin>>num;
    double original = num;
    int year = 1;
    while (num > 0){
        if (num >= original * 2){
            cout<<"Your money has doubled!"<<endl;
            cout<<"year "<<year<<" : "<<num<<endl;
            break;
        }
        else {
            num = num * 1.05;
            cout<<"year "<<year<<" : "<<num<<endl;
            year++;
        }
    }
    return 0;
}