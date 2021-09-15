#include<bits/stdc++.h>
using namespace std;
void reverse(int n){
    vector<int> vec;
    int r;
    while (n>0)
    {
        r = n%10;
        vec.push_back(r);
        n = n/10;
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec.at(i);
    }
    cout<<endl;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        reverse(n);
    }
    
}