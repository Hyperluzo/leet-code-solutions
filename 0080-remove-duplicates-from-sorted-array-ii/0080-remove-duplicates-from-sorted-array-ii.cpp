class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size() <= 2)
            return nums.size();

        int look = 1;      // Last valid index
        int check = 2;     // Start checking from the 3rd element
        int k = 2;

        while (check < nums.size()) {

            if (nums[check] != nums[look - 1]) {
                nums[look + 1] = nums[check];
                look++;
                k++;
            }

            check++;
        }

        return k;
    }
};