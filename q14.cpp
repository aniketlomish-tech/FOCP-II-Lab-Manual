#include <iostream>
using namespace std;

int main() {
int ch;
    double num1,num2,result;
    cout<<"1 Addition\n";
    cout<<"2 Subtraction\n";
    cout<<"3 Multiply\n";
    cout<<"4 Devision\n";
    cout<<"5 Exit\n";
    cout<<"Enter number 1";
    cin>>num1;
    cout<<"Enter number 2";
    cin>>num2;
    cout<<"Enter your choice\n";
    cin>>ch;
    
    
    switch(ch){
    case 1:
    result=num1+num2;
cout<<"Result:"<<result<<endl;
break;
case 2:
result=num1-num2;
cout<<"Result:"<<result<<endl;
break;
case 3:
result=num1*num2;
cout<<"Result"<<result<<endl;
break;
case 4:
if(num2==0){
    cout<<"not defined";
}
else{
result= (num1/num2);
cout<<"Result:"<<result<<endl;}
break;
case 5:
cout<<"Exiting the program,Goodbye!";
break;
default:
cout<<"invalid choice";
    }
    
    return 0;
}