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
            {
                swap(s[l++], s[h--]);
            }

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