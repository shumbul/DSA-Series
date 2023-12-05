// https://leetcode.com/problems/merge-sorted-array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // approach 1
        // int k=m;
        // for(int i: nums2)
        //     nums1[k++]=i;
        // sort(nums1.begin(), nums1.end());

        // approach 2
        // start from end      
        // Edge cases: if any of the vector is empty  
        if(n==0) return;
        if(m==0) {nums1=nums2; return;}
        int i=m-1, j=n-1;
        for(int k=nums1.size()-1;k>=0;k--){
            // cout<<i<<' '<<j<<k<<' '<<'\n';
            if(i<0){
                nums1[k]=nums2[j--];
            }
            else if(j<0 || nums1[i]>=nums2[j]){
                nums1[k]=nums1[i--];
            }
            else{
                nums1[k]=nums2[j--];
            }
        }
        
    }
};

/*
Time Complexities:
Approach 1 - O(nlogn)
Approach 2 - O(n)

Space Complexities:
Approach 1 - O(1)
Approach 2 - O(1)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 