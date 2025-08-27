#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int left=0;
        int current=0;
        int maxv=0;
        auto isvowel=[](char c){
            return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
        };
        for(int right=0;right<n;right++){
            if(isvowel(s[right])){
                current++;
            }
            if(right-left+1>k){
                if(isvowel(s[left])){
                    current--;
                }
                left++;
            }
            if(right>=k-1){
                maxv=max(maxv,current);
            }
        }
        return maxv;
    }
};
