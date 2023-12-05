/*
https://leetcode.com/problems/valid-palindrome
*/

class Solution {
public:
    bool isPalindrome(string s) {
        bool ans;
        int n = s.size();
        int i = 0,j = n - 1;
        while(i<j){
            if(!isalnum(s[i])){
                i++;
            }
            else if(!isalnum(s[j])){
                j--;
            }
            else if(tolower(s[i])==tolower(s[j])){
                i++;
                j--;
            }
            else{
               return false;
            }
            
        }
        return true;
    }
};


/*
Complexities
Time : O(n)
Space : O(1)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 