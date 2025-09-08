class Solution {
public:
    // Helper function: check if it's possible to make m bouquets with day = mid
    bool possible(vector<int>& bloomDay, int day, int m, int k) {
        int cnt = 0;      // count of consecutive bloomed flowers
        int bouquets = 0; // total bouquets formed

        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= day) {
                cnt++;
                if (cnt == k) {
                    bouquets++;
                    cnt = 0; // reset after forming a bouquet
                }
            } else {
                cnt = 0; // reset because flower not bloomed
            }
        }
        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long required = 1LL * m * k;
        if (required > bloomDay.size()) return -1; // Not enough flowers

        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < bloomDay.size(); i++) {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }

        int low = mini, high = maxi, ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possible(bloomDay, mid, m, k)) {
                ans = mid;
                high = mid - 1; // try for smaller day
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
