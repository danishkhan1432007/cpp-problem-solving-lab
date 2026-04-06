#include <iostream>
using namespace std;
int main (){
   int num;
   cout<<"Enter the number \n";
   cin>>num;
   if (num < 0 ){
    cout<<"Negative number \n";
   }
    else if (num > 0) {
    cout<<"positive number \n";
   }
   else {
    cout<<"The number is zero \n";
   }
   return 0;
}