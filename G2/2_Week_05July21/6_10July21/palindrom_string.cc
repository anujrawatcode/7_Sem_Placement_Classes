
// A man,a plan , a canal : panama , its a palindrome
#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main()
{

    string s;
    getline(cin,s);
    int i=0,j=s.size()-1;
    while(i<=j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        if(!isalpha(i))
        i++;
        if(!isalpha(j))
        j--;
    }

}