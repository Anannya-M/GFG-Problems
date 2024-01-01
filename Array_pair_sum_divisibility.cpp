//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        if(nums.size() % 2) return false;

        unordered_map<int, int> rem;

        for(int n: nums) {
            int r = n%k;

            if(r && rem.count(k - r) && rem[k - r] > 0) {
                --rem[k - r];
                rem[0] += 2;
            }
            else {
                ++rem[r];
            }
        }
    
        return rem[0] == nums.size();
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends