#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while(1)
    {
        cout<<"Enter an option: 1. Add 2. Multiply 3.Subtract"<<endl;
        cin>>a;
        if(a==1)
        {
            int b,c;
            cout<<"Enter first number:";
            cin>>b;
            cout<<"Enter second number:";
            cin>>c;
            cout<<"Sum is "<<b+c<<endl;
            break;
        }
        else if(a==2)
        {
            int b,c;
            cout<<"Enter first number:";
            cin>>b;
            cout<<"Enter second number:";
            cin>>c;
            cout<<"Product is "<<b*c<<endl;
            break;
        }
        else if(a==3)
        {
            int b,c;
            cout<<"Enter first number:";
            cin>>b;
            cout<<"Enter second number:";
            cin>>c;
            cout<<"Difference is "<<b-c<<endl;
            break;
        }
    }
}
