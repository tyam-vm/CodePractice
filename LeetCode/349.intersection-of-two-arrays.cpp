
/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start

class Solution {
public:
     //any way to not have to send the vetor. OH nevermind it send the pointer
    int search(vector<int>& big , int elm, bool reset=false){
        static int i = 0;
        if(reset){
            i=0;
            return -2;
        }
        std::cout << "Initial value of i: " << i << std::endl; // Debug line
    for (; i < big.size(); i++) {
        std::cout << "Current i: " << i << ", big[i]: " << big[i] << std::endl;
            if(big[i] > elm){
                break;
            }
            if(big[i] == elm){
                return i;
            }
        }
        return -1;
    }

    

    vector<int> clean(vector<int>& vec){
        vector<int> rtn;
        int temp = vec[0];
        rtn.push_back(vec[0]);
        for(int i =1; i < vec.size(); i++ ){
            
            if(temp != vec[i]){
                rtn.push_back(vec[i]);
                temp = vec[i];
            }
        }
        return rtn;
    }

    vector<int> intersectionHelper(vector<int>& big, vector<int>& small){
        vector<int> rtn;
        cout << "Hek";
        for(int i=0, where =0 ; small.begin() +i != small.end();i++){
            // need to optimise the small looping and the big looping (togather)?
            where = search(big , small[i]);
           
            if(where >= 0){
                rtn.push_back(small[i]);                
            }
            
        }
        return rtn; 
    } 
    
public:
   vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        search(nums1 , 0 , true);
        if(nums1.size()==0 || nums2.size() ==0){
            return {};
        }
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        nums2 = clean(nums2);
        nums1 = clean(nums1);
        
        if(nums1.size() >= nums2.size()){
            return intersectionHelper(nums1, nums2);
        }
        else{
            return intersectionHelper(nums2, nums1);
        }
    }
};
// @lc code=end
/*57/57 cases passed (55 ms)
Your runtime beats 5.3 % of cpp submissions
Your memory usage beats 57.2 % of cpp submissions (13.1 MB)*/
