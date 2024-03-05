//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        int mn[n], mx[n];
        mn[0] = a[0];
        for(int i=1; i<n; i++){
            mn[i] = min(mn[i-1], a[i]);
        }
        
        mx[n-1]=a[n-1];
        for(int i=n-2; i>=0; i--){
            mx[i] = max(mx[i+1], a[i]);
        }
        
        int i=0, j=0, ans=-1;
        while(i<n && j<n){
            if(mn[i] <= mx[j]){
                ans = max(ans, j-i);
                j += 1;
            }else{
                i += 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends
