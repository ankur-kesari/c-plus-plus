#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"enter two number:";
    cin>>a>>b;
    char c;
    cout<<"enter operator:";
    cin>>c;
    switch (c)
    {
       case ('+'):
       cout<<a+b;
        break;
       case ('-'):
       cout<<a-b;
        break;
       case ('*'):
       cout<<a*b;
        break;
       case ('/'):
       cout<<a/b;
        break;
    
    default:
         cout<<"invalid input"<<endl<<"enter operator again";
        break;
    }

    return 0;
}