//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    
		    string y="Yes";
		    string n1="No";
		    
		    vector<int> arr;
		    
		    while(n){
		        
		        arr.push_back(n%10);
		        n=n/10;
		    }
		    
		    int s=0;
		    int e = arr.size()-1;
		    
		    while(s<=e){
		        
		        if(arr[s]!=arr[e])
		        return n1;
		        s++;
		        e--;
		    }
		    return y;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends