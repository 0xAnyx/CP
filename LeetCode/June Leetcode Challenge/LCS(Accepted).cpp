#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        if(!num.size()) return 0;
        unordered_map<int, int> numlength;
        int maxLen = 1;
        for(int i = 0; i < num.size(); ++i) {
            if(!numlength.count(num[i])) {
                numlength[num[i]] = 1;
                if(numlength.count(num[i]-1)) {
                    int len = numlength[num[i]-1];
                    numlength[num[i]-len] = len+1;
                    numlength[num[i]] = len+1;
                    maxLen = max(maxLen, len+1);
                } 
                if(numlength.count(num[i]+1)) {
                    int rlen = numlength[num[i]+1];
                    int llen = numlength[num[i]];
                    numlength[num[i]+rlen] = llen+rlen;
                    numlength[num[i]-llen+1] = llen+rlen;
                    maxLen = max(maxLen, llen+rlen);
                }
            }
        }
        return maxLen;
    }
};