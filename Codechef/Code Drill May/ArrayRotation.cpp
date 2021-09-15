#include<iostream>
using namespace std;
void rot(int A[],int n,int k)
{
    int B[n];
    for (int i = 0; i < n; i++)
    {
        B[((i+k)%n)]=A[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        cout<<B[i];
        cout<<" ";
    }
    cout<<B[n-1];
}

int main(){
    int t,N,K;
    cin>>t;
    cin>>N>>K;
    int A[N];
    while (t--)
    {
        for (int i = 0; i < N; i++)
        {
            cin>>A[i];
        }
        rot(A,N,K);
    }
    return 0;
    
}