/*
https://leetcode.com/problems/longest-substring-without-repeating-characters
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int i = 0,j = 0,n = s.size();
        map<char,int> m;
        while(j<n){
            m[s[j]]++;
            while(m[s[j]] > 1){
                m[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};


/*
Complexities
Time : O(n)
Space : O(n)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 