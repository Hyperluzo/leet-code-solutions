class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
       

        int left = 0;
         long count = 0;
         long long curr_sum = 0;
        for(int right = 0 ; right < nums.size(); right++){
            curr_sum += nums[right];
            while(left <= right && curr_sum * (right - left +1) >=k){
                curr_sum -= nums[left];
                left ++;
            }
            count += (right - left +1);
        }
        return count;


    }
};