
/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start

class Solution {
private:
     //any way to not have to send the vetor. OH nevermind it send the pointer
    int search(vector<int>& big , int elm){// Gives index of big else -1
        if(big.size()){
            
        for(int i =0; i < big.size(); i++){
            if(big[i] == elm){
                return i;
            }
            }
            return -1;
        }
        return 1;
    }
    int ap(vector<int>& small, int idx){
         
        for(int i = 0; i < idx;  i++){
            if(small[idx] == small[i]){
                return 1;}
        }
        return 0;
    }
    vector<int> intersectionHelper(vector<int>& big, vector<int>& small){
        sort(big.begin(), big.end());
        sort(small.begin(), small.end());
        
        
        for(auto i=0 ; small.begin() +i != small.end() ;){
            
            if(ap(small , i)){
                small.erase(small.begin() + i);
                continue;
            }
            int idx = search(big , small[i]);
            
            if(idx <0){
                small.erase(small.begin() + i);
            }
            else{
                big.erase(big.begin() + idx);
                i++;
            }
            
            }
            return small;  
    } 
    
public:
   vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() >= nums2.size()){
            return intersectionHelper(nums1, nums2);
        }
        else{
            return intersectionHelper(nums2, nums1);
        }
    }
};
// @lc code=end
