class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freqMap;
        for(int num : arr){
            freqMap[num]++;
        }
        unordered_set<int> freqSet;
        for(auto& kv : freqMap){
            freqSet.insert(kv.second);
        }
        return freqSet.size() == freqMap.size();
    }
};
