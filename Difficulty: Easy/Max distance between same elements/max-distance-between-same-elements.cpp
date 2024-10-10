//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Create an unordered_map to store the first occurrence of each element
        unordered_map<int, int> index_map;
        int max_distance = 0; // Variable to store the maximum distance

        // Traverse the array to calculate maximum distance
        for (int i = 0; i < arr.size(); i++) {
            if (index_map.find(arr[i]) != index_map.end()) {
                // If the element has appeared before, calculate the distance
                int distance = i - index_map[arr[i]];
                // Update max_distance if this distance is larger
                max_distance = max(max_distance, distance);
            } else {
                // If it's the first occurrence, store the index
                index_map[arr[i]] = i;
            }
        }

        return max_distance; // Return the maximum distance found
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);

        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.maxDistance(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends