//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int mid = (arr1.size()+arr2.size())/2,len=arr1.size()+arr2.size();
        vector<int> ans;
        arr1.push_back(INT_MAX);
        arr2.push_back(INT_MAX);
        int l=0,r=0;
        for(int i=0;i<len;i++){
            if(arr1[l]>arr2[r]){
                ans.push_back(arr2[r]);
                r++;
            }else{
                ans.push_back(arr1[l]);
                l++;
            }
        }
        // for(auto &i:ans){
        //     cout<< i << "  ";
        // }
        if(len%2){
            return ans[mid];
        }
        return (ans[mid]+ans[mid-1]);
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends