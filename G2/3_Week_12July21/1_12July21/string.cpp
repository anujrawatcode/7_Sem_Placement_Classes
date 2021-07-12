#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/keyboard-row/

// https://leetcode.com/problems/most-common-word/
class Solution1
{

public:
    string simple_tokenizer(string s, vector<string> &banned)
    {
        // putting banned word in set
        unordered_set<string> st;
        for (int i = 0; i < banned.size(); i++)
            st.insert(banned[i]);

        // counting the word in s
        unordered_map<string, int> mp;

        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            //cout << word << endl;
            if (st.find(word) == st.end())
                mp[word]++;
        }

        int k = 0;
        string x = "";

        for (auto it : mp)
        {
            if (it.second > k)
            {
                x = it.first;
                k = it.second;
            }
        }

        return x;
    }

public:
    string mostCommonWord(string para, vector<string> &banned)
    {

        // lower case para
        transform(para.begin(), para.end(), para.begin(), ::tolower);
        //remove, para will only have alp and space
        // if not alphabet make space

        for (int i = 0; i < para.length(); i++)
        {
            if (!isalpha(para[i]))
                para[i] = ' ';
        }

        string s = simple_tokenizer(para, banned);

        return s;
    }
};

// https://leetcode.com/problems/shortest-distance-to-a-character/

class Solution2
{
public:
    vector<int> shortestToChar(string s, char c)
    {

        int n = s.length();
        vector<int> arr1(n, INT_MAX);
        vector<int> arr2(n, INT_MAX);

        int cnt = 0;
        int cnt1 = 0;
        int flag = 0;
        int flag1 = 0;
        int j = n - 1;
        for (int i = 0; i < n; i++, j--)
        {
            if (s[j] == c)
            {
                cnt1 = 0;
                arr2[j] = cnt1;
                flag1 = 1;
            }
            if (flag1 == 1)
            {
                arr2[j] = cnt1;
                cnt1++;
            }

            if (s[i] == c)
            {
                cnt = 0;
                arr1[i] = cnt;
                flag = 1;
            }
            if (flag == 1)
            {

                arr1[i] = cnt;
                cnt++;
            }
        }

        for (int i = 0; i < n; i++)
            if (arr2[i] > arr1[i])
                arr2[i] = arr1[i];

        return arr2;
    }
};

// https://leetcode.com/problems/reverse-only-letters/

class Solution3
{
public:
    string reverseOnlyLetters(string s)
    {
        int n = s.length();
        int l = 0;
        int h = n - 1;

        while (l < h)
        {
            if (isalpha(s[l]) && isalpha(s[h]))
                swap(s[l++], s[h--]);
            if (!isalpha(s[l]) && !isalpha(s[h]))
            {
                l++;
                h--;
            }
            if (!isalpha(s[l]) && isalpha(s[h]))
                l++;
            if (isalpha(s[l]) && !isalpha(s[h]))
                h--;
        }
        return s;
    }
};

// https://leetcode.com/problems/reformat-date/

class Solution4
{
public:
    vector<string> solve(string s)
    {
        vector<string> vec;
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            vec.push_back(word);
        }
        return vec;
    }

public:
    string getMonth(string s)
    {
        if (s == "Jan")
            return "01";
        if (s == "Feb")
            return "02";
        if (s == "Mar")
            return "03";
        if (s == "Apr")
            return "04";
        if (s == "May")
            return "05";
        if (s == "Jun")
            return "06";
        if (s == "Jul")
            return "07";
        if (s == "Aug")
            return "08";
        if (s == "Sep")
            return "09";
        if (s == "Oct")
            return "10";
        if (s == "Nov")
            return "11";
        if (s == "Dec")
            return "12";
        return "00";
    }

public:
    string getDate(string s)
    {
        int cnt = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
                cnt++;
        }
        if (cnt == 1)
            return '0' + s.substr(0, 1);
        return s.substr(0, cnt);
    }

public:
    string reformatDate(string date)
    {
        vector<string> vec = solve(date);
        string year = vec[2];
        string month = getMonth(vec[1]);
        string day = getDate(vec[0]);
        return year + '-' + month + '-' + day;
    }
};

// https://leetcode.com/problems/thousand-separator/