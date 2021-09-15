#include<iostream>
using namespace std;
class Solution{
    public:
    int coco(int a,int b,int c,int d){
        int x;
        x=(c/a)+(d/b);
        return x;
    }
};
int main(){
    int t,a,b,c,d;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c>>d;
        Solution Coconut;
        cout<<Coconut.coco(a,b,c,d)<<endl;
    }
}