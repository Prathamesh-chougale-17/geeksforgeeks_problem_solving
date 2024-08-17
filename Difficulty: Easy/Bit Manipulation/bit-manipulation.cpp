//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // bool getbit(int num,int i){
    //     return (x&(1<<i));
    // }
    // void 
    void bitManipulation(int num, int i) {
        // your code here
        cout<<(bool)((num)&(1<<(i-1)))<<" "<<(num|(1<<(i-1)))<<" "<<(num&(~(1<<(i-1))));
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends