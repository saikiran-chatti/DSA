#include<iostream>
using namespace std;

// https://practice.geeksforgeeks.org/batch-problems/count-only-repeated2047/0/?track=DSASP-Searching&batchId=154#

class Solution
{
    public:
    
    int countOccurences(int arr[],int n,int x,bool flag) {
      int low = 0,high = n-1,mid = (low+high)/2, start = 0,end = 0;
      
      while(low<=high) {
        mid = (high + low)/2;
        
        if(arr[mid] == x)  {
          if (flag) {
            if (mid == 0 || arr[mid] != arr[mid-1]) {
              start = mid;
              return start;
            } else {
              high = mid - 1;
            }
          } else {
            if (mid == n-1 || arr[mid] != arr[mid+1]) {
              end = mid;
              return end;
            } else {
              low = mid + 1;
            }
          }
        } else if (arr[mid] > x) {
          high = mid - 1;
        } else {
          low = mid + 1;
        }
      }
    
      return flag ?start:end;
    }
    
    int funRep(int arr[],int low,int high,int n) {
        int res = -1,mid = (high+low)/2;
        while(low <=high) {
            mid = (low + high)/2;
            
            if(mid != 0 && arr[mid] == arr[mid-1]){
                res = arr[mid];
                return res;
            } else if(mid != n-1 && arr[mid] == arr[mid+1]){
                res = arr[mid];
                return res;
            } else {
                int res1 = funRep(arr,low,mid-1,n);
                if(res1 != -1) {
                    return res1;
                } else {
                    int res2 = funRep(arr,mid+1,high,n);
                    return res2;
                }
            }
            
        }
        return -1;
    }
    //Function to find repeated element and its frequency.
    pair<int, int> findRepeating(int *arr, int n){
        // find the repeating element
        int low = 0,high = n-1,mid = (high+low)/2;
        int x = funRep(arr,low,high,n);
        
        int end = countOccurences(arr,n,x,false);
        int start = countOccurences(arr,n,x,true);
        
        return make_pair(x, ((end-start) == 0) ? -1 : (end-start+1) );
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    Solution obj;
	    pair<int, int> ans = obj.findRepeating(arr,n);
	    
	    cout << ans.first << " " << ans.second << endl;
	    
	}
	
}  // } Driver Code Ends