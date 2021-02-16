#include <iostream>
using namespace std;


int lastOcc(int arr[], int n, int x)
{
	int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(x > arr[mid])
			low = mid + 1;

		else if(x < arr[mid])
			high = mid - 1;

		else
		{
			if(arr[mid] != arr[mid+1] || mid == n-1)
			    return mid;
			else
			    low = mid + 1;
		}

	}

	return -1;
}

int main() {
    
  int arr[] = {10,15,15,20}, n = 3;

	int x = 15;
	
	cout<<lastOcc(arr, n, x);
	return 0;
}