#include <iostream>
using namespace std;


// Initialize:
//  {-2, -3, 4, -1, -2, 1, 5, -3}
//     max_so_far = INT_MIN
//     max_ending_here = 0

// Loop for each element of the array
//   (a) max_ending_here = max_ending_here + a[i]
//   (b) if(max_so_far < max_ending_here)
//             max_so_far = max_ending_here
//   (c) if(max_ending_here < 0)
//             max_ending_here = 0
// return max_so_far

int kadane(int arr[],int n) {
  int maxi = arr[0];
  int res = maxi;
  
  for(int i=1;i<n;i++) {
    maxi = max(maxi + arr[i],arr[i]);
    res = max(maxi,res);
  }

  return res;
}

int main() {

  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) {
    cin>>arr[i];
  }
  cout<<kadane(arr,n);
  return 0;
}