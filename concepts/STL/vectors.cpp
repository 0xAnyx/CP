#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>&v){
    cout<<"Size:"<<v.size()<< endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";
    }
    v.push_back(2);
    cout<<endl;
    
}

int main(){
    // vector<int> v;
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     printVec(v);
    //     v.push_back(x); // 0(1)
    // }
    // printVec(v);
// ======================================//
    vector<int> vec(12, 4);
    vec.push_back(7);
    vec.push_back(1);
    vector<int> &vec2 = vec;
    vec2.push_back(9);
    printVec(vec);
    printVec(vec);
    printVec(vec2);
    // vec.pop_back();
    // printVec(vec);
// ======================================//

}