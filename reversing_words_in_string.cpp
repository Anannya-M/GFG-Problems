//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<string> tmp;
        string str = "";
    for (int i = 0; i < S.length(); i++) {
 
        // Check if we encounter space
        // push word(str) to vector
        // and make str NULL
        if (S[i] == '.') {
            tmp.push_back(str);
            str = "";
        }
 
        // Else add character to
        // str to form current word
        else
            str += S[i];
    }
 
    // Last word remaining,add it to vector
    tmp.push_back(str);
 
    // Now print from last to first in vector
    int i;
    string res = "";
    for (i = tmp.size() - 1; i > 0; i--){
        res += tmp[i];
        res += ".";
    }
        
    // Last word remaining,print it
    res = res+ tmp[0];
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
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends