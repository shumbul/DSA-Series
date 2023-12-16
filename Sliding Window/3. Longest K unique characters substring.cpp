/*
https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
*/

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        int n = s.size();
        int ans = 0;
        unordered_map<char,int> S;
        int i = 0,j = 0;
        while(j < n){
            S[s[j]]++;
            if(S.size() == k){
                ans = max(ans,j - i + 1);
            }
            if(S.size() > k){
                while(S.size() > k){
                    S[s[i]]--;
                    if(S[s[i]] == 0){
                        S.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;
        }
        return ans == 0 ? -1 : ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}


/*
Complexities
Time : O(n)
Space : O(n)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 