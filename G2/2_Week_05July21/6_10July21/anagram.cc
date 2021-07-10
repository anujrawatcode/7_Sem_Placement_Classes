// Therer are 2 string str1 and str2
// Manipulate str1 so that str2 is made
// cat and atc are anagrams.
// sum of ascii is same is not correct , as a+c = d+f
// sorting both strings and if equal then anagrams.(nlogn)


#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<int> freq(26,0);

    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    // make a map 
    int i=0;
    if(s1.size()==s2.size())
    {
    while(s1[i]!='\0')
    {
        freq[s1[i]-'a']++;
        i++;
    }
    i=0;
    while(s2[i]!='\0')
    {
        freq[s2[i]-'a']--;
        i++;
    }
    bool flag = true;
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
        flag = false;
    }
    if(flag)
    cout<<"Anagram"<<endl;
    else
    cout<<"NOt Anagram"<<endl;
    }
    else
    cout<<"NOt Anagram"<<endl;
    return 0;
}