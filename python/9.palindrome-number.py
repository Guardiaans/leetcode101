#
# @lc app=leetcode id=9 lang=python3
#
# [9] Palindrome Number
#

# @lc code=start
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        if x == 0:
            return True
        if x % 10 == 0:
            return False
        if x < 10:
            return True
        x_str = str(x)
        x_len = len(x_str)
        for i in range(x_len // 2):
            if x_str[i] != x_str[x_len - i - 1]:
                return False
        return True

# @lc code=end
