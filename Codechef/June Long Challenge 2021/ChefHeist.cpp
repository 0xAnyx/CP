#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
class Solution{
    public:
        int Heist(int D,int d,int P,int Q){
            int x,count=0;
            x=D/d;
            if (x%2==0){
                count+=d*((x/2)*(2*P+(x-1)*Q));
            }
            else{
                count+=d*(x*(P+((x-1)/2)*Q));
            }
            count+=(D%d)*(P+(x)*Q);
            return count;
        }
};
int main(){
    ll t,a,b,c,d;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c>>d;
        Solution BellaCiao;
        cout<<BellaCiao.Heist(a,b,c,d)<<endl;
    }
    
}


