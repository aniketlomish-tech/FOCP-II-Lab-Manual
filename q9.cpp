#include <iostream>
#include<cctype>
using namespace std;

int main() {

    char ch;
    cout<<"Enter character:";
    cin>>ch;
    if(isdigit(ch)){
        cout<<"It is a number"<<endl;
    }
    else if(isalpha(ch)){
        char lower = tolower(ch);
        switch(lower){
            case 'a':case 'e':case 'i':case 'o':case 'u':
            
            cout<<"It is a vowel"<<endl;
            break;
        default:
    cout<<"It is a consonent"<<endl;      
        }
    }
    else
    cout<<"It is a special character"<<endl;
    return 0;
}