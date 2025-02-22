/*
 * @lc app=leetcode id=896 lang=cpp
 *
 * [896] Monotonic Array
 */

// @lc code=start
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = false;
        bool dec = false;
        int size = nums.size();

        if(size < 3){
            return true;
        }
        for(int i =0 ; i < size-1 ; i++){
            if(nums[i] < nums[i+1]){
                inc = true;
            }

            else if(nums[i] > nums[i+1]){
                dec = true;
            }

            if(inc && dec){
                return false;
            }
        }
        return true;
    
    }
};
// @lc code=end

