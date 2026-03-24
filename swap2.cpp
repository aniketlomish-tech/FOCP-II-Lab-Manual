        #include <iostream>
        using namespace std;
        void swap(int a,int b){
            int x;
            x=a;
            a=b;
            b=x;
        }

        int main() {
            int a,b;
            cout<<"Enter the value of a and b";
            cin>>a,b;
            swap(a,b);
            cout<<"The value of a:"<<a<<"the value of b:"<<b;


            
            return 0;
        }