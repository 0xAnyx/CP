#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string s_rev;
    // for (int i = s.length()-1; i >= 0; i--)
    // {
    //     s_rev=s_rev+s[i];
    // }
    // cout<<s_rev;
    for (int i = s.size(); i >=0; --i)
    {
        s_rev.push_back(s[i]);
    }
    cout<<s_rev<<endl;
}