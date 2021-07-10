//2^32
//A b C ....... Z  AA AB AC.......BA BB .......... ZZ AAA AAB AAC.......... ZZZ
//1 2 3 ....... 26 27 28......
// 28->AB , 28/26=1(A),29%26=2(B)
//701-ZY


#include<iostream>
#include<string>

using namespace std;

string ColnotoColName(int n)
{
string s="";
while(n>0)
{
    char c='A'+(n-1)%26;
    s=c+s;
    n=n(n-1)/26;
}
return s;
}



int main()
{
    char a[26] = {A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};
    int n;
    cin>>n;
    cout<<ColnotoColName(n);
    return 0;
}
