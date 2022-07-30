#
# @lc app=leetcode id=14 lang=ruby
#
# [14] Longest Common Prefix
#

# @lc code=start
# @param {String[]} strs
# @return {String}
def longest_common_prefix(strs)

    return '' if strs.empty?
    
    prefix = strs[0]
    strs.each do |str|
        while str.index(prefix) != 0
        prefix = prefix[0...-1]
        end
    end
    
    prefix
    
end
# @lc code=end

