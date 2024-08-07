//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        arr1.push_back(INT_MAX);
        arr2.push_back(INT_MAX);
        int l{0},r{0},ans{0};
        if(k>=(arr1.size()+arr2.size()))
            return -1;
        while(k){
            if(arr1[l]>arr2[r]){
                ans = arr2[r];
                r++;
            }
            else{
                ans = arr1[l];
                l++;
            }
            k--;
        }
        return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl;
    }
    return 0;
}
// } Driver Code Ends