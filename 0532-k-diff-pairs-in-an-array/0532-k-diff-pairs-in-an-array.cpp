class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0)
        return 0;

        sort(nums.begin(), nums.end());
        int left = 0, right = 1, count = 0;

        while(right<nums.size()){
            int diff = nums[right] - nums[left];

            if(diff<k || left == right){
                right++;
            }
            else if(diff>k){
                left++;
            }
            else{
                count++;
                left++;
                right++;

                while(right<nums.size() && nums[right] == nums[right-1])
                right++;
            }
        }
        return count;
    }
};