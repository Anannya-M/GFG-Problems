#include<iostream>
using namespace std;
long long maxSubarraySum(int arr[], int n){
        long long sum = 0;
        long long maxi = LONG_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            
            if(sum>maxi)
            {
                maxi=sum;
            }
            
            if(sum<0){
                sum=0;
            }
        }
    return maxi; 
    }
int main(){
    int arr[] = {-2,-1,-1,7,8,-5,-2,7,4,9,-8,-7,12};
    int ans = maxSubarraySum(arr,13);
    cout<<ans;
    return 0;

}