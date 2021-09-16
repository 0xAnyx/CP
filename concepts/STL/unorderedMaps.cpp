/*Given N strings and Q queries. In each query you are given a string print frequency of that string.
N<=10e5
|S|<=100*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    int q;
    cin>>q;
    while (q--)
    {
        string s;
        cin>>s;
        cout<< m[s]<<endl;
    }
    
}