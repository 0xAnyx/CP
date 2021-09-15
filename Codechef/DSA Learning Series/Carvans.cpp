#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int counter=1;
        int max_speed=arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i]<=max_speed)
            {
                max_speed=arr[i];
                counter+=1;        
            }
        }
        cout<<counter<<endl;
    }
}
