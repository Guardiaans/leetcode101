/*
 * @lc app=leetcode id=8 lang=csharp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
public class Solution {
    public int MyAtoi(string s) {
        int i = 0; // index
        int sign = 1; // sign
        int result = 0; 
        if (s.Length == 0) return 0; // empty string
        while (i < s.Length && s[i] == ' ') i++; // skip white spaces
        if (i < s.Length && (s[i] == '+' || s[i] == '-')) { // check sign
            sign = (s[i++] == '+') ? 1 : -1; // skip sign
        }
        while (i < s.Length && s[i] >= '0' && s[i] <= '9') { // check number
            if (result > Int32.MaxValue / 10 || (result == Int32.MaxValue / 10 && s[i] - '0' > 7)) { // check overflow
                return (sign == 1) ? Int32.MaxValue : Int32.MinValue; // return max or min
            }
            result = result * 10 + (s[i++] - '0'); // calculate result
        }
        return result * sign;
    }
}
// @lc code=end

