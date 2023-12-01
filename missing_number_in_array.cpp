//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        
        // Using a Gaussian formula 
        // n*(n+1)/2
        
        int sum_of_range_num = n*(n+1)/2;
        int total_sum = 0;
        
        for (int i = 0; i < n-1; i++){
            total_sum += array[i];
        }
        
        return sum_of_range_num - total_sum;
    }
        
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
