/*
https://leetcode.com/problems/ways-to-make-a-fair-array/
*/

class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int oldodd=0, oldeven=0, n=nums.size();
        // calculating old odd and even sums
        for(int i=0;i<n;i++){
            if(i%2)
                oldodd+=nums[i];
            else
                oldeven+=nums[i];
        }

        int ans=0, newodd=0, neweven=0;

        for(int i=0;i<n;i++){
            if(i%2)
                oldodd-=nums[i];
            else
                oldeven-=nums[i];

            int oddsum=newodd+oldeven, evensum=neweven+oldodd;
            
            if(oddsum==evensum)
                ans++;

            if(i%2)
                newodd+=nums[i];
            else
                neweven+=nums[i];
        }
        return ans;
    }
};

/*

Approach 1: Brute force: 

int ans=0, n=nums.size();
for(int i=0;i<n;i++){
    vector<int> temp(nums.begin(), nums.end());
    temp.erase(temp.begin()+i);

    int oddsum=0, evensum=0;
    for(int j=0;j<n-1;j++){
        if(j%2){
            oddsum+=temp[j];
        }
        else{
            evensum+=temp[j];
        }
    }
    if(oddsum==evensum){
        ans++;
        // we got fair array
    }
}
return ans;

Complexities:
TC: O(n*n)
SC: O(n)

*/

/*
Approach 2:
[6,1,7,4,1]

oddsum, evensum
int oddsum=newodd+oldeven, evensum=neweven+oldodd;

Complexities:
TC: O(n)
SC: O(1)

*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 