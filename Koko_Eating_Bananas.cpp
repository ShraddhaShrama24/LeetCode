class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canEatAll(piles, h, mid)) {
                ans = mid;      
                right = mid - 1;
            } else {
                left = mid + 1;  
            }
        }
        return ans;
    }

    bool canEatAll(vector<int>& piles, int h, int speed) {
        long long total_h = 0;
        for (int bananas : piles) {
            total_h += (bananas + speed - 1) / speed;
        }
        return total_h <= h;
    }
};
