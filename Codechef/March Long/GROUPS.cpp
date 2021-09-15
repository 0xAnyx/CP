#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    string grp;
    int group;
    for(int i=0;i<t;i++){
        cin>>grp;
        group=0;
        for(int j=0;j<grp.length();j++){
            if(grp[j]=='1'){
                if(grp[j+1]=='1'){
                    j++;
                    group+=1;
                }
                else{
                    group+=1;
                }

            }
            else{
                group += 0;
            }
        }
        cout<<group<<endl;
    }
    
    return 0;
}
