#include <iostream>
using namespace std;
class fincer{
public:int function(string input){
        int grp=0;
        int size=sizeof (input);
        for (int i=0;i<size;i++){
            if (input[i]=='0' && input[i+1]=='1')
                grp++
                        ;}
        if(input[0]=='1')
            grp++;
        return grp;
    }
};
int main(){
    fincer f1;string zeroes;
    int test;
    cin>>test;
    for (int data=0;data<test;data++){
        cin>>zeroes;
    cout<<f1.function(zeroes)<<endl;
}}