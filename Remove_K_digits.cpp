//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int k) {
        
        int len = S.length();
        if (len <= k) {
            return "0";
        }

        vector<char> result;

        for (int i = 0; i < len; i++) {
            while (!result.empty() && S[i] < result.back() && k > 0) {
                result.pop_back();
                k--;
            }
            result.push_back(S[i]);
        }

        while (k > 0) {
            result.pop_back();
            k--;
        }

        // Remove leading zeros
        int i = 0;
        while (i < result.size() && result[i] == '0') {
            i++;
        }

        // Form the final result
        return (i == result.size()) ? "0" : string(result.begin() + i, result.end());
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends