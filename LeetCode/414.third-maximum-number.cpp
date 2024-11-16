/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */

// @lc code=start
class Solution {
public:
    long long int thirdMax(vector<int>& nums) {
        long long int max1;
        long long int max2;
        long long int max3;
        int n = nums.size();
            if(n==1){
                return nums[0];
            }
            if(n==2){
                return (nums[0]>nums[1]) ? nums[0] : nums[1];
            }
            vector<int> temp = {nums[0],nums[1],nums[2]};
            std::sort(temp.begin(), temp.end());
            max1 = temp[2];
            max2 = temp[1];
            max3 = temp[0];
            for(int i =0; i < n; i++){
                if(nums[i] > max1){
                    max3 = max2;
                    max2 = max1;
                    max1 = nums[i];
                }
            }
            if (max2 == max3){
                return max1;
            }
            else{
                return max3;
            }
            
        
    }
};
//@lc code=end

