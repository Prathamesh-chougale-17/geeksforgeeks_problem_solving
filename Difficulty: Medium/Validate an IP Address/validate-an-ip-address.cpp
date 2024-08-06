//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
  public:
    bool isValid(string &str) {
        // code here
        vector<string> vt(4);
        int x{0},temp{0};
        for(int i=0;i<str.size();i++){
            if(str[i]=='.'){
                x++;
                continue;
            }
            vt[x].push_back(str[i]);
        }
        for(int i=0;i<4;i++){
            if(stoi(vt[i])<0 || stoi(vt[i])>255) return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends