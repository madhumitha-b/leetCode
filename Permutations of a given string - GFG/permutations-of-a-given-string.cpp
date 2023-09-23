//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	void calculate(string &S,vector <string>& res,int i){
	    
	    if(i>=S.length()){
	    res.push_back(S);
	    
	    }
	    
	    unordered_set<char> st;
	    
	    for(int j=i;j<S.length();j++){
	        
	        if(st.find(S[j])!=st.end()) continue;
	         st.insert(S[j]);
	        swap(S[i],S[j]);
	        calculate(S,res,i+1);
	        swap(S[i],S[j]);
	    }
	}
	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> res;
		   // vector<string> ans;
		    int i=0;
		    calculate(S,res,i);
		   
		    return res;
		    
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends