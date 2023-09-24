//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        
        stack<int> stk;
        stk.push(-1);
        int n=s.length();
        int res=0;
        
        for(int i=0;i<n;i++){
         
         if(stk.empty())
         stk.push(i);
         
         if(s[i]=='(')
         stk.push(i);
         
         else{
             
             stk.pop();
             
             if(!stk.empty()){
                 
                 res=max(res,i-stk.top());
             }
          else stk.push(i);   
         }
         
        }
        
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}

// } Driver Code Ends