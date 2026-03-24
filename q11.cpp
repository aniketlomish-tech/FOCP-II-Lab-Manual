#include <iostream>
using namespace std;

int main() {

    int a,d;
    cout<<"Enter total amount";
    cin>>a;
    d=a-(a/10);
    if(a>1000){
        cout<<"plz pay:"<<d<<endl;
    }
    else
    cout<<"Plz pay:"<<a<<endl;
    return 0;
}