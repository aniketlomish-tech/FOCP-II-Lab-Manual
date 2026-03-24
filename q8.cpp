#include <iostream>
using namespace std;

int main() {
int id;
    cout<<"Enter event ID:";
    cin>>id;
    
    if(id%3==0&&id%5==0){
        cout<<"fizzbuzz";
    }
else if(id%3==0){
        cout<<"fizz";
    }
    else if(id%5==0){
        cout<<"buzz";
    }



    return 0;
}