/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start

class Solution {
public:
     //any way to not have to send the vetor. OH nevermind it send the pointer
    /*
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
    } */

    

    // vector<int> clean(vector<int>& vec){
    //     vector<int> rtn;
    //     int temp = vec[0];
    //     rtn.push_back(vec[0]);
    //     for(int i =1; i < vec.size(); i++ ){
            
    //         if(temp != vec[i]){
    //             rtn.push_back(vec[i]);
    //             temp = vec[i];
    //         }
    //     }
    //     return rtn;
    // }

    // vector<int> intersectionHelper(vector<int>& big, vector<int>& small){
    //     vector<int> rtn;
    //     for(int i=0, j =0 ,n = big.size(); small.begin() +i != small.end();i++){
    //         // need to optimise the small looping and the big looping (togather)?
            
    //        for(; j < n; j++){
    //         if(small[i] < big[j]){
    //             break;
    //         }
    //         if(small[i] == big[j]){
    //             rtn.push_back(small[i]);
    //             j++;
    //             break;
                
    //         }
    //        }
            
    //     }
    //     return rtn; 
    // } 
    

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        vector<int> ans(max(nums1.size(), nums2.size()));
        vector<int>::iterator endidx = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), ans.begin());
        ans.resize(endidx - ans.begin());
        
        return ans;
};
};
// @lc code=end
/*57/57 cases passed (55 ms)
Your runtime beats 5.3 % of cpp submissions
Your memory usage beats 57.2 % of cpp submissions (13.1 MB)*/
