#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two number:";
    cin>>a>>b;
    cout<<"Odd number is:";
    for (int i = a; i <= b; i++)
    {
        if(i%2==0)
        {
        continue;
        }
        cout<<i<<"\n";
    }
     

    return 0;
}