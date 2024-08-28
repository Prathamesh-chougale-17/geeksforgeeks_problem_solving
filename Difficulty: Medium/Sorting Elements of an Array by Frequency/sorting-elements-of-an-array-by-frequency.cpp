//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        vector<int> ans;
        vector<pair<int,int>> vp;
        unordered_map<int,int> um;
        for(auto &i:arr){
            um[i]++;
        }
        for(auto &i:um){
            vp.push_back({i.first,i.second});
        }
        sort(vp.begin(),vp.end(),[](pair<int,int> a,pair<int,int> b){
            if(a.second==b.second) return b.first>a.first;
            return a.second > b.second;
        });
        for(auto &i:vp){
            for(int j=0;j<i.second;j++){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends