// str1 = "Guest hit Aman , Aman hit Ayush ... !"
// str2= ["hit",....]

//Most frequent word which must not be in a str2.
// hit-2,aman-2,aman is mots frequent and is not part of string 2 . 
// Its case insensitive , Ignore all punctuations.

//1. Remove all punctuations. O(n)
//2. Convert all leters to tolower. O(n)
//3. For each word store its freq to map.O(n),O(m)-space 
//4. Ignore all words in str2 stored in map and themn return highest freq word.



#include<iostream>
#include<vector>
#include<string>

using namespace std;


int main()
{
    vector<string> s2;
    string s1;
    getline(cin,s1);
    int n;cin>>n;
    string t;
    for(int i=0;i<n;i++)
    {
        getline(cin,t);
        s2.push_back(t);
    }

    for(int i=0;i<s1.length();i++)
    {
        s1[i] = isalpa(s1[i])?tolower(s1[i]):' ';
        //stringstream - s will contain all the words that are in s1[]
        stringstream s(s1);
        // 1st word will be stored on word from s , and will do so
        unordered_map<string,int> result;
        unordered_set<string> set(s2.begin(),s2.end());
        while(s>>word)
        {
            if(!set.count(word))
            {
                result[word]++;
            }
        } 
        string temp;
        int freq = INT_MIN;
        for(int i=0;i<result.size();i++)
        {

            if(result[i].second>freq)
            {
                temp = result[i].first;
                freq = result[i].second;
            }
        }

    }
    cout<<temp<<endl;

    return 0;
}
