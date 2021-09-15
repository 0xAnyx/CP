#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> &vec){
    cout<<"Size:-"<<vec.size()<<endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
    cout<<endl;
    
}
int main(){
    vector<pair<int, int>> v;
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    
    printVec(v);
}