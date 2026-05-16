#include<iostream>
using namespace std;
int main(){
    int choice , i = 0;
    cout<<"welcome to the resturent sir , the menu is below  \n";
    cout<<" 1. Burger \t 500 Rs\n 2. Pizza \t 800 Rs\n 3. Fries \t 200 Rs\n 4. Exit \n";
    do{
        cout<<"\n Enter your choice: ";
        cin>>choice;
        switch (choice){
        case 1:
        cout<<" You order the burger! ";
        break;
        case 2:
        cout<<" You order the pizza! ";
        break;
        case 3:
        cout<<" You order the fries! ";
        break;
        case 4:
        cout<<" Exiting .... \n";
        break;
        default:
        cout<<" invalid choice "; 
        
    }
}while(choice != 4);
        cout<<"Thank you! , Good bye! \n";
        return 0;
}