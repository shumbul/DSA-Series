/*
https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
*/



vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                
        vector<long long> ans;
        long long int i = 0,j = 0;
        long long int firstInd = -1;
        queue<long long int> Q;
        while(j < N){
            if(A[j] < 0) {
                Q.push(A[j]);
            }
            if(j - i + 1 < K){
                j++;
            }
            else if(j - i + 1 == K){
                if(Q.size() == 0){
                    ans.push_back(0);
                }
                else{
                    ans.push_back(Q.front());
                    if(A[i] == Q.front()){
                        Q.pop();
                    }
                }
                i++;
                j++;
            }
        }
        return ans;                             
 }

 /*
Complexities
Time : O(n)
Space : O(n)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 