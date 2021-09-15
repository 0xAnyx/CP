// https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<long long> bags;
        for (int i = 0; i < n; i++)
        {
            long long candy_ct;
            cin >> candy_ct;
            bags.insert(candy_ct);
        }
        long long totalCandies = 0;
        for (int i = 0; i < k; i++)
        {
            auto last_it = (--bags.end());
            long long candy_ct = (*last_it);
            totalCandies += candy_ct;
            bags.erase(last_it);
            bags.insert(candy_ct / 2);
        }
        cout << totalCandies << endl;
    }
}