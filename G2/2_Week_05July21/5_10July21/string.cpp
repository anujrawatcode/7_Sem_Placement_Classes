#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/valid-palindrome/

// que palindrome
// contain spaces
// alpha numeric
// ignore cases

// a man, a plan, a canal : Panama

// Q.2 excel colume
// https://leetcode.com/problems/excel-sheet-column-number/

// https://leetcode.com/problems/excel-sheet-column-title/

// Q.3 anagram
// https://leetcode.com/problems/valid-anagram/
bool isAnagram(string s, string t)
{

    if (s.length() != t.length())
        return false;

    map<char, int> mp;

    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }

    for (int i = 0; i < t.length(); i++)
    {
        mp[t[i]]--;
    }

    for (auto it : mp)
        if (it.second != 0)
            return false;
    return true;
}

// Q.4
// https://leetcode.com/problems/reverse-vowels-of-a-string/
class Solution4
{
public:
    bool isVowel(char x)
    {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
            x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'

        )
            return true;
        else
            return false;
    }

public:
    string reverseVowels(string s)
    {

        int l = 0;
        int h = s.length();

        while (l < h)
        {
            if (isVowel(s[l]) && isVowel(s[h]))
                swap(s[l++], s[h--]);
            else if (isVowel(s[l]) && !isVowel(s[h]))
                h--;
            else if (!isVowel(s[l]) && isVowel(s[h]))
                l++;
            else
            {
                l++;
                h--;
            }
        }
        return s;
    }
};

// Homework
// https://leetcode.com/problems/ransom-note
bool canConstruct(string ransomNote, string magazine)
{
    int n1 = ransomNote.length();
    int n2 = magazine.length();

    map<char, int> mp;

    for (int i = 0; i < n1; i++)
        mp[ransomNote[i]]++;
    for (int i = 0; i < n2; i++)
    {
        if (mp.find(magazine[i]) != mp.end())
            mp[magazine[i]]--;
    }

    for (auto it : mp)
        if (it.second > 0)
            return false;
    return true;
}
// https://leetcode.com/problems/longest-palindrome

int longestPalindrome(string s)
{

    int n = s.length();
    unordered_map<char, int> mp;

    for (int i = 0; i < n; i++)
        mp[s[i]]++;

    int flag = 0;
    int sum = 0;

    for (auto it : mp)
    {
        if (it.second % 2 == 0) // even
        {
            sum += it.second;
        }
        if (it.second % 2 == 1)
        {
            sum += it.second - 1;
            flag = 1;
        }
    }
    if (flag == 1)
        return sum + 1;
    return sum;
}

// https://leetcode.com/problems/add-strings