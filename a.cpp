#include<bits/stdc++.h>
using namespace std;
int add(int n1,int n2){
    return n1+n2;
}
int square(int n)
{
    return n*n;
}
void find_even(int n);
int main()
{
    int a;
    for(;;)
    {
        cout<<"Enter an option: 1. Add 2. Multiply 3.Subtract 4.Divide"<<endl;
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
        else if(a==4)
        {
            int b,c;
            cout<<"Enter first number:";
            cin>>b;
            cout<<"Enter second number:";
            cin>>c;
            if(c!=0)
                cout<<"Result is "<<b/c<<endl;
            else
                cout<<"Infinity"<<endl;
            break;
        }
    }
}
void find_even(int n)
{
    if(n%2==0)
        cout<<"Even"<<endl;
    else
        cout<<"Odd"<<endl;
}
