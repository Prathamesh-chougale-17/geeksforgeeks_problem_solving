//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        string ans,temp;
        for(auto &i:str){
            if(temp.size() && i=='.'){
                ans = '.' + temp + ans;
                temp = "";
            }
            if(i!='.'){
                temp.push_back(i);
            }
        }
        if(temp.size()) ans = temp + ans;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends