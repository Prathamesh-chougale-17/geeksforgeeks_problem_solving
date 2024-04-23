//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int firstElement(int n) {
        // code here
        int x{1},y{1},res{0},temp{n-2};
        if(n<3){
            return 1;
        }
        else{
            while(temp--){
                res = (x + y)% (1000000007);
                y=x;
                x = res;
                
            }
            return x ;
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
        Solution ob;
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends