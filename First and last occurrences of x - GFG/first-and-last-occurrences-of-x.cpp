//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector <int> ans;
   // sort(arr,arr+n);
   int str=0;
   int end=n-1;
   int mid=str+(end-str)/2;
   while(str<=end){
       if(arr[mid]==x)
       goto jump;
       else if(arr[mid]>x){
           end=mid-1;
       }
       else
       str=mid+1;
       mid=str+(end-str)/2;
   }
   ans.push_back(-1);
   ans.push_back(-1);

   jump:
    for(int i=0;i<n;i++){
        if(i==0 && arr[i]==arr[i+1] &&  arr[i]==x)
        ans.push_back(i);
        else if(arr[i]!=arr[i+1] && arr[i+1]==x)
        ans.push_back(i+1);
        else if( arr[i]!=arr[i+1] && arr[i]==x)
         ans.push_back(i);
    }
    
    
    sort(ans.begin(),ans.end());
    return ans;
    
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends