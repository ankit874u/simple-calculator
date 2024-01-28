#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    char x;
    while(true){
        cout<<"enter number one:"<<endl;
        cin>>num1;
        cout<<"enter number two:"<<endl;
        cin>>num2;
            cout<<"press A for addition:"<<endl;
            cout<<"press B for subtraction:"<<endl;
            cout<<"press C for multiplication:"<<endl;
            cout<<"press D for division:"<<endl;
            cout<<"press E for remainder:"<<endl;
            cin>>x;
        if(x=='A')
            cout<<"the sum ="<<num1+num2<<endl;
        else if(x=='B')
            cout<<"the subtract ="<<num1-num2<<endl;
        else if(x=='C')
            cout<<"the multiplication ="<<num1*num2<<endl;
        else if(x=='D')
            cout<<"the division ="<<num1/num2<<endl;
        else if(x=='E')
            cout<<"the remainder ="<<num1%num2<<endl;
        else
            cout<<"**invailed operation**"<<endl;

    }
    return 0;
}
