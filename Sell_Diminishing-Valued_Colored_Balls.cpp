class Solution {
public:
    int maxProfit(vector<int>& inventory, int orders) {
        const int mod = 1e9 + 7;
        int n = inventory.size();
        long long ret = 0;
        
        sort(inventory.begin(), inventory.end());
        
        for (int i = n - 1; i >= 0 && orders > 0; i--) {
            long long cur = inventory[i];
            long long next = (i > 0 ? inventory[i - 1] : 0);
            long long count = n - i; // number of colors at this level
            long long diff = cur - next;
            
            long long total = count * diff; // total balls between cur and next
            
            if (orders >= total) {
                // take all levels down to 'next'
                ret += count * (cur + next + 1) * diff / 2;
                ret %= mod;
                orders -= total;
            } else {
                // can only take part of this level
                long long full = orders / count;
                long long rem = orders % count;
                
                long long low = cur - full;
                ret += count * (cur + low + 1) * full / 2;
                ret %= mod;
                ret += rem * low;
                ret %= mod;
                orders = 0;
            }
        }
        return (int)ret;
    }
};
