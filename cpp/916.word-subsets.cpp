/*
 * @lc app=leetcode id=916 lang=cpp
 *
 * [916] Word Subsets
 */

// @lc code=start
class Solution
{
public:
    vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
    {

        vector<string> result;    // result vector
        vector<int> count(26, 0); // count vector

        for (auto &word : words2) // for each word in words2
        {
            vector<int> temp(26, 0); // initialize a temporary vector to store the count of each letter in the word
            for (auto &c : word)     // for each letter in the word
            {
                temp[c - 'a']++; // increment the count of the letter
            }
            for (int i = 0; i < 26; i++) // for each letter in the temporary vector
            {
                count[i] = max(count[i], temp[i]); // assign the maximum count of the letter to the count vector
            }
        }

        for (auto &word : words1) // for each word in words1
        {
            vector<int> temp(26, 0); // initialize a temporary vector to store the count of each letter in the word
            for (auto &c : word)     // for each letter in the word
            {
                temp[c - 'a']++; // increment the count of the letter
            }
            bool flag = true;            // initialize a flag to indicate whether the word is a subset of the words2
            for (int i = 0; i < 26; i++) // for each letter in the temporary vector
            {
                if (temp[i] < count[i]) // if the count of the letter is less than the maximum count of the letter
                {
                    flag = false; // the word is not a subset of the words2
                    break;
                }
            }
            if (flag) // if the word is a subset of the words2
            {
                result.push_back(word); // add the word to the result vector
            }
        }

        return result;
    }
};
// @lc code=end
