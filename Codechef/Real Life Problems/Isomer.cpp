#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,count=0;
        cin>>n;
        if (n%2==0)
        {
            count=n/2;
        }
        else{
            count=(n-1)/2;
        }
        cout<<count<<"\n";    
    }
    
}