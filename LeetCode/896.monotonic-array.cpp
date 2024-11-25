/*
 * @lc app=leetcode id=896 lang=cpp
 *
 * [896] Monotonic Array
 */

// @lc code=start
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (nums.size()==1) return true;
        else{
            bool inc(true), dec(true);
            int n = nums.size();
            
            for(int i =0; i < n-1; i++){
                if(nums[i+1] > nums[i] ){
                    
                    dec = false;
                }
                if(nums[i+1] < nums[i] ){
                    
                    inc = false;
                }

                if(!dec && !inc){
                    return false;}         
                }
        
        return true;           
        }
    }
};
// @lc code=end

