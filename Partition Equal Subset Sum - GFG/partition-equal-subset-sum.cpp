//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    bool solve(int N, int arr[],int index,int target,vector<vector<int>> &dp){
        
        if(index>=N) return 0;
        if(target < 0) return 0;
        if(target==0) return 1;
        if(dp[index][target]!=-1)   return dp[index][target];
        
        bool inc=solve(N,arr,index+1,target-arr[index],dp);
        bool exc=solve(N,arr,index+1,target-0,dp);
        
        return dp[index][target]=inc || exc;
    }

    int equalPartition(int N, int arr[])
    {
        // code here
        int total=0;
        for(int i=0;i<N;i++)
        total=total + arr[i];
        if(total%2 != 0)
        return 0;
        int target=total/2;
       
        vector<vector<int>> dp(N,vector<int>(target+1, -1));
       return solve(N,arr,0,target,dp);
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends