#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout<<"Enter an option: 1. Add 2. Multiply"<<endl;
    cin>>a;
    if(a==1)
    {
        int b,c;
        cout<<"Enter first number:";
        cin>>b;
        cout<<"Enter second number:";
        cin>>c;
        cout<<"Sum is "<<b+c<<endl;
    }
    else
    {
        int f,g;
        cout<<"Enter first number:";
        cin>>f;
        cout<<"Enter second number:";
        cin>>g;
        cout<<"Sum is "<<f*g<<endl;
    }
}
