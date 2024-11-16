//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

const int MOD = 1000000007;
class Solution {
  public:
  
    long long int fn(vector<long long> &dp,int n){
        if(n<2) return n;
        if(dp[n]!=-1)return dp[n];
        return dp[n] = (fn(dp,n-1)%MOD+fn(dp,n-2)%MOD)%MOD;
    }
    long long int topDown(int n) {
        // code here
        vector<long long> dp(n+1,-1);
        return fn(dp,n);
    }
    long long int bottomUp(int n) {
        // code here
        // vector<long long> dp2(n+1);
        // dp2[1]=1;
        // for(int i=2;i<=n;i++){
        //     dp2[i]=(dp2[i-1]%MOD+dp2[i-2]%MOD)%MOD;
        // }
        // return dp2[n]%MOD;
        vector<long long> dp(n+1,-1);
        return fn(dp,n);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends