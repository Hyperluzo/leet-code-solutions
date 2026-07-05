class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int look = 0;
        int check = 1 ;
        int k = 1;

        while (check < nums.size()){
            if(nums[check] == nums[check - 1]){
                check++;
                continue;
            }
            else{
                nums[look + 1] = nums[check];
                check ++;
                look ++;
                k ++;
            }
            

        } return k;
        
    }
};