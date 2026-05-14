#include <iostream>
using namespace std;
int main (){
    int item , price , total = 0;
    float discount;
    cout<<"Enter the number of items you buy: ";
    cin>>item;
    for (int i = 1; i <= item ;i++){
       cout<<"Enter the item "<<i<<" price: ";
       cin>>price;

       total = total + price;
    }
    cout<<"Total price: "<<total<<endl;
    if (total >= 5000){
        discount = total * 0.1;
     cout<<"You get 10% discount on total price: "<<discount<<endl;
     cout<<"Total price after discount: "<<total - discount<<endl;
}
 else {
     cout<<"No discount for you ";
 }
    return 0;
}