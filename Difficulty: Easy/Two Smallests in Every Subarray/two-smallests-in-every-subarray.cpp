//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     int pairWithMaxSum(vector<int>& arr) {
        // code here
      //  sort(arr.begin(),arr.end());
        
        int n=arr.size();
        if(n==1)
        return -1;
        int i=0,j=1;
        int sum=INT_MIN;
        while(j<n){
            int a=arr[i]+arr[j];
            sum=max(sum,a);
            i++;
            j++;
        }
        return sum;
       
    }
};



//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();

    while (tc--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<int> a;
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution obj;
        int res = obj.pairWithMaxSum(a);
        cout << res << endl;
    }
}
// } Driver Code Ends