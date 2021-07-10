// My name is ashish gard -> My nami as ishesh garg.
// Store all the vowels in a array,reverse the vowel array,
//traverse the string again and when vowel is found then replece it with vowel array element.

// TWo pointer approach
#include<iostream>
#include<string>

using namespace std;


bool is_Vowel(char ch)
{
    return ch=='u'||ch=='o'||ch=='i'||ch=='e'||ch=='a'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U';
}
int main()
{

    string s;
    getline(cin,s);
    int l=0;
    int r=s.size()-1;
    while(l<r)
    {
        while(l<r && !is_Vowel(s[l])) l++;
        while(l<r && !is_Vowel(s[r])) r--;
        swap(s[l],s[r]);
        l++;
        r--;
    }
    cout<<s<<endl;
    return 0;
}
// We can use this for consonents also , just by removing ! while calling is_Vowel. 