/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
// @lc code=start
using namespace std;
class Solution
{

public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        cout << "twoSum" << std::endl;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (map.find(complement) != map.end() && map[complement] != i)
            {
                return {i, map[complement]};
            }
        }
        return {};
    }
};
// @lc code=end
int main(int argc, char const *argv[])
{
    /* code */
    Solution s = Solution();
    return 0;
}
