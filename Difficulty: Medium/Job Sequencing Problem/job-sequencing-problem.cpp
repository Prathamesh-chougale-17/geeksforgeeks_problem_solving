//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class DSU{
  
public:
    
    vector<int> parent;
    vector<int> size;
    
    DSU(int n){
        parent.resize(n+1);
        size.resize(n+1,1);
        
        for(int i=0;i<n+1;i++)
            parent[i] =i;
    }
    
    int findParent(int x){
        
        if(x==parent[x])
            return x;
        
        return parent[x]=findParent(parent[x]);    
        
    }
    
    void unionBySize(int a,int b){
        
        int pa = findParent(a);
        int pb = findParent(b);
        
        if(pa==pb)
            return;
        
        if(pa<pb){
            // size[pa]+=size[pb];
            parent[pb] =pa;
        }
        else{
            // size[pb] +=size[pa];
            parent[pa] =pb;
        }
        
        return;
    }
    
  
    
};

class Solution 
{   
    public:
    static bool cmp(Job a,Job b){
        
        if(a.profit==b.profit){
            return a.dead<b.dead;
        }
        
        return a.profit>b.profit;
        
    }
    
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        int sz = sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+n,cmp);
        
        DSU ds(n);
        
        int total=0,maxProfit  =0;
        
        for(int i=0;i<n;i++){
            
            int val = arr[i].profit;
            int deadline = arr[i].dead;
            
            int curParent = ds.findParent(deadline);
            
            if(curParent!=0){
                
                total++;
                maxProfit+=val;
                ds.unionBySize(curParent,curParent-1);
            }
            
        }
        
        
        return {total,maxProfit};
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends