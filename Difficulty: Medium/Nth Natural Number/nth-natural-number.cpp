//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long findNth(long long n) {
         long ans=0, place=1;
        while(n>0){
            long rem = n%9;
            ans += rem * place;
            n /= 9;
            place *= 10;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans;
        cin >> n;
        Solution obj;
        ans = obj.findNth(n);
        cout << ans << endl;
    }
}

// } Driver Code Ends