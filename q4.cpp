#include <iostream>
using namespace std;

int main() {

    int it,q;
    double ut,dis,tm,bl;
    cout<<"Enter item number:";
    cin>>it;
    cout<<"Enter quantity:";
    cin>>q;
    cout<<"enter unit price:";
    cin>>ut;
    tm =q*ut;
    dis=tm*0.2;
    bl=tm-dis;
    cout<<"total amount="<<tm<<endl;
    cout<<"discount="<<dis<<endl;
    cout<<"bill="<<bl<<endl;
    return 0;
}