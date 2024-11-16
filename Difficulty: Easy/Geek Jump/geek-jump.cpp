//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    
  public:
    int ans(int n,vector<int> &h,vector<int> &dp){
        if(n==0)return 0;
        if(dp[n]!=-1) return dp[n];
        int left = ans(n-1,h,dp) + abs(h[n]-h[n-1]);
        int right = INT_MAX;
        if(n>1){
            right = ans(n-2,h,dp) + abs(h[n]-h[n-2]);
        }
        return dp[n] = min(left,right);
    }
    int minimumEnergy(vector<int>& height, int n) {
        vector<int> dp(n+1,-1);
        return ans(n-1,height,dp);
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends