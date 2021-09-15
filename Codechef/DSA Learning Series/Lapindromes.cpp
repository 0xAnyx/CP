// Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.Your task is simple. Given a string, you need to tell if it is a lapindrome.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<char> vec1, vec2;
        if (s.size() % 2 == 0)
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (i < s.size() / 2)
                {
                    vec1.push_back(s[i]);
                }
                else
                {
                    vec2.push_back(s[i]);
                }
            }
        }
        else
        {
            s.erase(s.begin() + s.size() / 2);
            for (int i = 0; i < s.size(); i++)
            {
                if (i < s.size() / 2)
                {
                    vec1.push_back(s[i]);
                }
                else
                {
                    vec2.push_back(s[i]);
                }
            }
        }
        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());
        if (vec1 == vec2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}