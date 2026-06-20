class Solution {
public:
    
    bool canShip(vector<int>& weights, int days, int capacity) {
        int currentLoad = 0;
        int dayCount = 1;

        for (int weight : weights) {
            if (currentLoad + weight > capacity) {
                dayCount++;
                currentLoad = weight;
            } else {
                currentLoad += weight;
            }
        }

        return dayCount <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = 0;

        for (int weight : weights) {
            high += weight;
        }

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canShip(weights, days, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};