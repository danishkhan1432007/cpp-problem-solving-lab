#include <iostream>
using namespace std;
int main(){
    float Length , Width , Area , Perimeter;
    cout<<"Enter the length : ";
    cin>>Length;
    cout<<"Enter the width : ";
    cin>>Width;
    Area = Length * Width;
    Perimeter = 2 * (Length + Width);
    cout<<"Area : "<<Area<<endl;
    cout<<"Perimeter : "<<Perimeter<<endl;
    return 0;

}