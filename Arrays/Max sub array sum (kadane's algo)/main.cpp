#include<iostream>
#include<cmath>
using namespace std;

int maxSubArray(int arr[],int n){
  int res = 0,tot=0, maxVal = arr[0];
  for(int i=0;i<n;i++){
    if( (arr[i] + tot) < 0)
      tot = 0;
    else
      tot += arr[i];
    res = max(res,tot);
    maxVal = max(arr[i],maxVal);
  }
  return maxVal >=0?res:maxVal;
}

int maxSum(int arr[], int n)
{
	int res = arr[0];

	int maxEnding = arr[0];

	for(int i = 1; i < n; i++)
	{
		maxEnding = max(maxEnding + arr[i], arr[i]);

		res = max(maxEnding, res);
	}
	
	return res;
}

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>n;
  maxSubArray(arr,n);
  return 0;
}