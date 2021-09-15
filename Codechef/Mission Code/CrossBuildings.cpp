#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        int temp=0;
        int build(vector<int> &v,int m){
            for (int i = 1; i <v.size(); i++)
            {
                if(v[i]>v[i-1] && v[i]-v[i-1]<=m)
                    m=m-(v[i]-v[i-1]);
                else if(v[i]<v[i-1])
                    temp=v[i-1]-v[i];
                    v[i]=v[i]+temp;
            }
            if(m==0)
                cout<<"YES";
            else
                cout<<"NO";
        }
};
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int> vec(a,a+n);
    Solution Bob;
    Bob.build(vec,m);
}