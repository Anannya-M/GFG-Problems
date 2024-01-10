//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int, int> map;
 
        int mod_arr[n], max_len = 0;
        int curr_sum = 0;
 
        for (int i = 0; i < n; i++) {
            curr_sum += arr[i];
 
        mod_arr[i] = ((curr_sum % k) + k) % k;
 
        if (mod_arr[i] == 0)
            
            max_len = i + 1;
 
        else if (map.find(mod_arr[i]) == map.end())
            map[mod_arr[i]] = i;
 
        else
            // if true, then update 'max'
            if (max_len < (i - map[mod_arr[i]]))
            max_len = i - map[mod_arr[i]];
        }
    return max_len;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends