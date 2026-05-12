#include <iostream>
#include <string>
using namespace std;
int main(){
int choice, age, pass ,deposit;
float balance = 5000 , withdraw;
string name;
cout<<"Enter your account details \n";
cout<<"Enter your name :";
getline(cin,name);
cout<<"Enter your age :";
cin>>age;
cout<<"Now enter your password :";
cin>>pass;
if (pass != 12345){
    cout<<"Invalid password. Access denied. \n";
    return 0;
}
else {
    cout<<"Access garanteed . Welcome "<<name<<endl;
}
do {
cout<<"\t Enter your choice \n";
cout<<" 1= check balance \n 2= Deposit \n 3= withdraw \n 4= Exit \n ";
cin>>choice;
switch (choice)
{
case 1:
    cout<<"Your current balance is "<<balance;
    break;
case 2:
    cout<<"how much balance you want to deposit ";
    cin>>deposit;
    balance = balance + deposit;
    cout<<"you deposited"<<deposit<<" now your balance is : "<< balance;
    break;
    case 3:
    cout<<"who much money you want to withdraw \n";
    cin>>withdraw;
    if (withdraw < balance){
        balance = balance - withdraw;
        cout<<"withdraw successfully now your remaing balance is : "<<balance;
    }
    else {
        cout<<"invalid withdraw balance your account donot have that much ";
    }
    break;
    case 4:
    cout<<"Exiting  your account Goodbye \n ";
    break ;
default:
    cout<<"invalid choice ";
    break;
}
cout<<endl;
}
 while (choice != 4);


    return 0;
}