// Alice is a kindergarten teacher. She wants to give some candies to the children in her class.
//All the children sit in a line and each of them has a rating score according to
//his or her performance in the class. Alice wants to give at least 1 candy to each child.
//If two children sit next to each other, then the one with the higher rating must get more candies.
//Alice wants to minimize the total number of candies she must buy.
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        int n = ratings.size();
        vector<int> L2R(n, 1);
        vector<int> R2L(n, 1);
        // for left to right
        for (int i = 1; i < n; i++)
        {
            if (ratings[i] > ratings[i - 1])
                L2R[i] = L2R[i - 1] + 1;
        }
        // for right to left
        for (int i = n - 2; i >= 0; i--)
        {
            if (ratings[i] > ratings[i + 1])
                R2L[i] = R2L[i + 1] + 1;
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += max(L2R[i], R2L[i]);
        }
        cout << sum << endl;
    }
};
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> vec(arr, arr + n);
    Solution candies;
    candies.candy(vec);
    return 0;
}