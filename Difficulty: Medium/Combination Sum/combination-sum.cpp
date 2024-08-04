//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
    
    vector<vector<int>> total;
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    
    void generate(vector<int> &A,int B,vector<vector<int>> &sol,vector<int> &sub,int i){
        if(B==0){
            // for(auto &i:sub) cout<<i<< "  ";
            // cout<<endl;
            sol.push_back(sub);
            return;
        }
        if(B<0 || i==A.size()) return;
        sub.push_back(A[i]);
        generate(A,B-A[i],sol,sub,i);
        sub.pop_back();
        generate(A,B,sol,sub,i+1);
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>> sol;
        vector<int> sub;
        sort(A.begin(),A.end());
        auto it = unique(A.begin(),A.end());
        A.erase(it,A.end());
        generate(A,B,sol,sub,0);
        return sol;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends