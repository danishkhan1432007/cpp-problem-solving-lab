#include<iostream>
using namespace std;
int main (){
    double temp;
    cout<<"Enter the temperature of the room : ";
    cin>>temp;
    if (temp >= 45){
        cout<<"The temperature of the room is hot ";
    }
    else if (temp >= 30 ){
        cout<<"The temperature of the room is warm ";
    }
    else if (temp >= 20  ){
        cout<<"The temperatue of the room is pleasant ";
    }
    else {
        cout<<"The temperature of the room is cold ";
    }
    return 0;
}