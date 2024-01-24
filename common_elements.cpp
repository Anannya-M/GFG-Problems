//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
             int i = 0, j = 0, k = 0;
             vector<int> res;
 
    // Iterate through three arrays while all arrays have
    // elements
    while (i < n1 && j < n2 && k < n3) {
 
        // If x = y and y = z, print any of them and move
        // ahead in all arrays
        if (A[i] == B[j] && B[j] == C[k]) {
            res.push_back(A[i]);
            i++;
            j++;
            k++;
        }
 
        // x < y
        else if (A[i] < B[j])
            i++;
 
        // y < z
        else if (B[j] < C[k])
            j++;
 
        // We reach here when x > y and z < y, i.e., z is
        // smallest
        else
            k++;
        }
        set<int> s(res.begin(), res.end());
        res.assign(s.begin(), s.end());
        return res;
    }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends