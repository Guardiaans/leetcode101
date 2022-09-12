/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // explain the codes below:
        int sum = 0; // sum of all numbers before the pivot
        // sum of all numbers after the pivot
        for (int i = 0; i < nums.size(); i++) { 
            sum += nums[i]; 
        }
        int left = 0; // sum of all numbers before the pivot
        for (int i = 0; i < nums.size(); i++) {
            // if the sum of all numbers before the pivot is equal to the sum of all numbers after the pivot, then the pivot is at index i
            if (left == sum - left - nums[i]) { 
                return i;
            }
            left += nums[i];
        }
        return -1;
        
    }
};
// @lc code=end

