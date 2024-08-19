//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    
    void merge(int l,int r,int mid,vector<int> &arr){
        int ls = mid-l+1,rs = r-mid;
        int la[ls+1],ra[rs+1];
        for(int i=0;i<ls;i++){
            la[i]= arr[l+i];
        }
        for(int i=0;i<rs;i++){
            ra[i]=arr[mid+1+i];
        }
        ra[rs] = la[ls] = INT_MAX;
        int li{0},ri{0};
        for(int i=l;i<=r;i++){
            if(ra[ri]>=la[li]){
                arr[i]=la[li];
                li++;
            }
            else{
                arr[i]=ra[ri];
                ri++;
            }
        }
    }

    void mergeSort(int l,int r,vector<int> &arr){
        if(l==r) return;
        int mid = (l + r)/2;
        mergeSort(l,mid,arr);
        mergeSort(mid+1,r,arr);
        merge(l,r,mid,arr);
    }

    int kthSmallest(vector<int> &arr, int k) {
        mergeSort(0,arr.size()-1,arr);
        return arr[k-1];
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        k = crr[0];
        int n = arr.size();
        Solution ob;
        cout << ob.kthSmallest(arr, k) << endl;
    }
    return 0;
}

// } Driver Code Ends