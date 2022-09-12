/*
 * @lc app=leetcode id=1480 lang=cpp
 *
 * [1480] Running Sum of 1d Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {

        vector<int> res;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        { // O(n)
            sum += nums[i];
            res.push_back(sum);
        }
        return res;
    }
};
// @lc code=end
