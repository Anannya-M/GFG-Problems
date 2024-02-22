//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

const int prime = 1e9 + 7;
class Solution
{
    public:
    int subsequenceCount(string s, string t)
    {
      //Your code here
      int n = s.size();
      int m = t.size();
      
      vector<int> prev(m + 1, 0);

    // Initialize the count for an empty string (base case)
    prev[0] = 1;

    // Iterate through s1 and s2 to calculate the counts
    for (int i = 1; i <= n; i++) {
        for (int j = m; j >= 1; j--) { // Iterate in reverse direction to avoid overwriting values prematurely
            if (s[i - 1] == t[j - 1]) {
                // If the characters match, we have two options:
                // 1. Match the current characters and add to the previous count (prev[j-1])
                // 2. Leave the current character in s1 and match s2 with the previous characters (prev[j])
                prev[j] = (prev[j - 1] + prev[j]) % prime;
            }
            // No need for an else statement since we can simply leave the previous count as is
        }
    }

    // The value at prev[m] contains the count of distinct subsequences
    return prev[m];
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends
