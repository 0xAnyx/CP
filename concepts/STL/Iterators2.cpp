#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,4,1,7,5};
    for ( auto it = v.begin(); it != v.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    for(int &value: v){
        cout<<value<<" ";
    }
    cout<<endl;
    vector<pair<int, int>> vp = {{1,2},{3,4}};
    for(auto &value: vp){
        cout<< value.first << " " << value.second <<endl;
    }
} 