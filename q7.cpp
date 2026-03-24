#include <iostream>
using namespace std;

int main() {

    int p1,p2,p3;
    cout<<"Score of player 1:";
    cin>>p1;
    cout<<"Score of player 2:";
    cin>>p2;
    cout<<"Score of player 3:";
    cin>>p3;
    if(p1>p2&&p1>p3){
        cout<<"player 1 is winner with score:"<<p1<<endl;
    }
    if(p2>p1&&p2>p3){
        cout<<"player 2 is the winner with score:"<<p2<<endl;
    }
    if(p3>p1&&p3>p2){
        cout<<"player 3 is the winner with score:"<<p3<<endl;
    }
    return 0;
}