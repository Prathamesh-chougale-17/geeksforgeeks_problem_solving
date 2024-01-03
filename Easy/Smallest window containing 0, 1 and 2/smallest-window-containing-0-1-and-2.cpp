//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
     int smallestSubstring(string S)
    {
        // Code here
        int n = S.length();
        int i = 0, j = 0;
        int ans = INT_MAX;
        int count[3] = {0};
        int cnt = 0;
        while (j < n)
        {
            count[S[j] - '0']++;
            if (count[S[j] - '0'] == 1)
                cnt++;
            if (cnt == 3)
            {
                while (count[S[i] - '0'] > 1)
                {
                    count[S[i] - '0']--;
                    i++;
                }
                ans = min(ans, j - i + 1);
            }
            j++;
        }
        if (ans == INT_MAX)
            return -1;
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends