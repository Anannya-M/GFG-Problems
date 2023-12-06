//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
        
        //Initialize the count as 0
        int count = 0;
        
        
        for(int i = L+1; i<R; i++){
            //While loop for getting the digits of each number
            int n = i;
            while(n != 0){
                int rem = n % 10; //gives us the last digit
                
                //Compares the digit with the input digit
                if(rem == X){ 
                    count++; //If matches, then increase the count by 1
                }
                n = n/10; // gives us the remaining number excluding the last digit
            }
        }
        return count;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R, X;
        cin >> L >> R >> X;
        Solution ob;
        int ans = ob.countX(L, R, X);
        cout << ans << "\n";
    }
}

// } Driver Code Ends
