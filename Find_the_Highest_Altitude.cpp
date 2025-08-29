class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_alt=0, current=0;
        for(int g : gain){
            current +=g;
            if(current>max_alt){
                max_alt=current;
            }
        }
        return max_alt;
    }
};
