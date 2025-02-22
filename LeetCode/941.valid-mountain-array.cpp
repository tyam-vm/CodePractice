/*
 * @lc app=leetcode id=941 lang=cpp
 *
 * [941] Valid Mountain Array
 */
  
// @lc code=start
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int tip = 0;
        int size = arr.size();
        bool started_decreasing = false;
        if(size < 3 ){
            return false;
        }
        for( int i =0; i < size-1 ; i++){
            if(arr[i] == arr[i+1]){
                return false;
            }
            if(arr[i] > arr[i+1]){
                tip = i;
                started_decreasing = true;
                break;
            }
        }
        for( int i = tip; i < size-1 ; i++){
            if(arr[i] <= arr[i+1]){
                return false;
            }
        }
        
        if ( tip == 0 ){
            return false;
        }
        else{
            return true;
        }


    }
};
// @lc code=end

