//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    void solve(vector<int> A,int index, vector<int>& subset, vector<vector<int>>& res){
        
        
        if(index==A.size()){
            res.push_back(subset);
        return ;
        }
        
        subset.push_back(A[index]);
        solve(A,index+1,subset,res);
        subset.pop_back();
        solve(A,index+1,subset,res);
    }
    
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        
        vector<int> subset;
        vector<vector<int>> res;
        solve(A,0,subset,res);
        sort(res.begin(),res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends