#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string, string>, vector<int>> m;
    int N;
    cin >> N;
    while (N--)
    {
        string fn,ln;
        int n;
        cin>>fn>>ln>>n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            m[{fn, ln}].push_back(x);
        }
    }

    for(auto &pr:m){
        auto &name = pr.first;
        auto &marks = pr.second;
        cout<< name.first << " " << name.second<<endl;
        cout<< marks.size()<<endl;
        for(auto &element: marks){
            cout<<element<<" ";
        }
        cout<<endl;
    }  
} 