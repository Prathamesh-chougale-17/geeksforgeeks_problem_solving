//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        vector<int> x;
        x.push_back(0);
        x.push_back(1);
       if(n>1){
            for(int i = 0 ; i< n-1;i++){
            x.push_back((x[i]+x[i+1])%(int(pow(10,9)+7)));
        }
        return x;
       }
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

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends