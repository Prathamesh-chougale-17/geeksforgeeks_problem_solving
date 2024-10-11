//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> rearrange(vector<int>& arr) {
        // Code here
        unordered_map<int,int> um;
        for(auto &i:arr) um[i]=1;
        // cout<<maxi;
        int n = arr.size();
        for(int j=0;j<n;j++) arr[j]=um[j]>0?j:-1;
        return arr;
    }
};

// class Solution {
// public:
//     vector<int> rearrange(const vector<int>& arr) {
//         unordered_map<int, int> um;
//         for (auto &i : arr) {
//             um[i] = 1;  // Mark presence of each element
//         }
        
//         int n = arr.size();
//         vector<int> result(n, -1);  // Initialize result with -1
        
//         for (int i = 0; i < n; i++) {
//             if (um.find(i) != um.end()) {
//                 result[i] = i;  // If the element `i` is present, place it at `result[i]`
//             }
//         }
        
//         return result;
//     }
// };



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> arr;
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution solution;
        vector<int> ans = solution.rearrange(arr);

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends