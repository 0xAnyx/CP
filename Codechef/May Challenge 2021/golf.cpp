#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,x,k;
        cin>>N>>x>>k;
        if (x%k==0)
        {
            cout<<"YES\n";
        }
        else if((N+1-x)%k==0)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
}