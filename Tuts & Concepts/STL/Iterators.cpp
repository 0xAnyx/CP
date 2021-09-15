#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,4,1,7,5};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it = v.begin();
    for (it = v.begin(); it !=v.end(); it++)
    {
        cout<<(*it)<<endl;
    }
    cout<<endl;
    vector<pair<int, int>> vp = {{1,2},{2,3},{3,4}};
    vector<pair<int, int>>:: iterator it1;
    for ( it1 = vp.begin(); it1 != vp.end(); it1++)
    {
        cout<<(*it1).first << " " << (*it1).second<<endl;
    } 
    for ( it1 = vp.begin(); it1 != vp.end(); it1++)
    {
        cout<<it1->first << " " << it1->second<<endl;
    }
    
}