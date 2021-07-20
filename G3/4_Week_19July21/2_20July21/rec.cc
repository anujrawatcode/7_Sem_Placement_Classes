#include<iostream>
using namespace std;


int rec(int n)
{
    cout<<"one"<<endl;
    if(n==0)
    return 0;
    cout<<"Two"<<endl;
    if(n==1)
    return 1;
    cout<<"three"<<endl;
    int n1=rec(n-1);
    cout<<"four"<<endl;
    int n2=rec(n-2);
    cout<<"five"<<endl;
    return n1+n2;
    cout<<"six"<<endl;
}

int main()
{

    cout<<rec(3)<<endl;

    return 0;
}