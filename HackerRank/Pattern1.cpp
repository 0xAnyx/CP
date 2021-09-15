// Question->https://www.hackerrank.com/challenges/printing-pattern-2/problem
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4   for n=4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int len = 2 * n - 1;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            int min = i < j ? i : j;
            min = min < len - i ? min : len - i - 1;
            min = min < len - j - 1 ? min : len - j - 1;
            cout << n - min;
        }
        cout << endl;
    }
}