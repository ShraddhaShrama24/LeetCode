class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.size();
        int count = 1; 
        
        for (int i = 0; i < n; ) {
            char current = word[i];
            int j = i;
            while (j < n && word[j] == current) {
                j++;
            }
            int runLength = j - i;
            if (runLength >= 2) {
                count += (runLength - 1);
            }
            i = j;
        }
        
        return count;
    }
};
