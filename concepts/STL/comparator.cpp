#include<bits/stdc++.h>
using namespace std;
bool shouldIswap(pair<int,int>a, pair<int,int>b){
    if(a.first!=b.first){
        return a.first<b.first;
    }
    else{
        if(a.second<b.second) return false;
        return true;
    }
}
int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), shouldIswap);
    cout<<"OUTPUT:-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<< v[i].first << " " << v[i].second<<endl;
    }
    cout<<endl;
}