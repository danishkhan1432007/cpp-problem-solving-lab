#include <iostream>
using namespace std;
int main(){
    int player = 11 , score, total = 0, highest = 0, topplayer = 0, goodinings = 0;
    for (int i = 1; i<= player; i++){
        cout<<"Enter the score of player "<<i<<": ";
        cin>>score;
        total = total + score;
        if (score > highest){
            highest = score;
            topplayer = i;
        }
        if (score >= 30){
            goodinings++;
        }
    }
    cout<<"Total score of the team is: "<<total<<endl;
    cout<<"Highest score of the team player "<<topplayer<<" is : "<<highest<<endl;
    cout<<"Number of good innings (30 or more runs) is: "<<goodinings<<endl;
    return 0;
}