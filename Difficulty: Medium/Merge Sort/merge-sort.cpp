//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void merge(vector<int> &arr,int l,int mid,int r){
        vector<int> ans;
        int i=l,j=mid+1;
        while(i<=mid && j<=r){
            if(arr[i]>arr[j]){
                ans.push_back(arr[j]);
                j++;
            }else{
                ans.push_back(arr[i]);
                i++;
            }
        }
        while(i<=mid){
            ans.push_back(arr[i]);
            i++;
        }
        while(j<=r){
            ans.push_back(arr[j]);
            j++;
        }
        for(int k=0;k<ans.size();k++){
            arr[l+k]=ans[k];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l>=r)return;
        int mid = l +(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends