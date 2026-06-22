class Solution {
public:
    int bs(vector<int>& nums, int target, int s, int e) {
        if (s > e) {
            return -1;
        }

        int mid = s + (e - s) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        if (target < nums[mid]) {
            return bs(nums, target, s, mid - 1);
        }

        return bs(nums, target, mid + 1, e);
    }

    int search(vector<int>& nums, int target) {
        return bs(nums, target, 0, nums.size() - 1);
    }
};