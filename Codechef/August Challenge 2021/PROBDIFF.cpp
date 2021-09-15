#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int t,arr[10];
    cin>>t;
    while (t--)
    {
        for (int i = 0; i < 4; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+4);
        if(arr[0]==arr[1] && arr[1]==arr[2] && arr[2]==arr[3]){
            cout<<0<<endl;
        }
        else if((arr[0]==arr[1] && arr[1]==arr[2]) || (arr[1]==arr[2] && arr[2]==arr[3])){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    
}