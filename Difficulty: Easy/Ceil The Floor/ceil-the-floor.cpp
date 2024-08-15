//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int l=0,r=arr.size()-1,mid=0,sm=-1,lg=-1;
        while(l<=r){
            mid = l + (r-l)/2;
            if(x>arr[mid]){
                sm = mid;
                l = mid+1;
            }else if(x<arr[mid]){
                lg=mid;
                r=mid-1;
            }
            else{
                return { x,x};
            }
        }
        return { sm==-1?-1:arr[sm] , lg==-1?-1:arr[lg] };
    }
    
    // 1 2 3 5 6 8 9 10 12 //7
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends