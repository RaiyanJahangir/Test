#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    for(;;)
    {
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
    }
}
