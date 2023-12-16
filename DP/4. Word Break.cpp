// Link: https://leetcode.com/problems/word-break/

// we have to check for all possible substrings,
// and for every length we need to check if it is part of wordDict
// only there is a way to form substring of that length 

// Code
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> words(wordDict.begin(), wordDict.end());
        if(words.find(s)!=words.end()) return true;
        int n=s.length();
        vector<bool> dp(n+1, false);
        dp[0]=true;

        for(int l=1;l<=n;l++){
            for(int i=0;i<l;i++){
                string t=s.substr(i, l-i);
                if(dp[i] && words.find(t)!=words.end()){
                    dp[l]=true;
                    break;
                }
            }
        }
        return dp[n];
    }
};

/*
Time complexity: O(n*n)
Space complexity: O(n)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 