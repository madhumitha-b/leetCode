//{ Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}

// } Driver Code Ends



    //code here.
string printSequence(string S) {
    int n = S.length();
    string res;
    for (int i = 0; i < n; i++) {
        if (isupper(S[i])) {
            char ch = tolower(S[i]);
            switch (ch) {
                case 'a':
                    res = res + '2';
                    break;
                case 'b':
                    res = res + "22";
                    break;
                case 'c':
                    res = res + "222";
                    break;
                case 'd':
                    res = res + '3';
                    break;
                case 'e':
                    res = res + "33";
                    break;
                case 'f':
                    res = res + "333";
                    break;
                case 'g':
                    res = res + '4';
                    break;
                case 'h':
                    res = res + "44";
                    break;
                case 'i':
                    res = res + "444";
                    break;
                case 'j':
                    res = res + '5';
                    break;
                case 'k':
                    res = res + "55";
                    break;
                case 'l':
                    res = res + "555";
                    break;
                case 'm':
                    res = res + '6';
                    break;
                case 'n':
                    res = res + "66";
                    break;
                case 'o':
                    res = res + "666";
                    break;
                case 'p':
                    res = res + '7';
                    break;
                case 'q':
                    res = res + "77";
                    break;
                case 'r':
                    res = res + "777";
                    break;
                case 's':
                    res = res + "7777";
                    break;
                case 't':
                    res = res + '8';
                    break;
                case 'u':
                    res = res + "88";
                    break;
                case 'v':
                    res = res + "888";
                    break;
                case 'w':
                    res = res + '9';
                    break;
                case 'x':
                    res = res + "99";
                    break;
                case 'y':
                    res = res + "999";
                    break;
                case 'z':
                    res = res + "9999";
                    break;
            }
        } else if (S[i] == ' ') {
            res = res + '0';
        }
    }
    return res;
}
