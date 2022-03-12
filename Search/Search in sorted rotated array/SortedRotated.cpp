#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
  int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(arr[mid] == x)
			return mid;
		if(arr[low] < arr[mid])
		{
			if(x >= arr[low] && x < arr[mid])
				high = mid - 1;
			else 
				low = mid + 1;
		}
		else
		{
			if(x > arr[mid] && x <= arr[high])
				low = mid + 1;
			else
				high = mid - 1;
		}
	}
	return -1;
}

int binarySearch(int a[],int low, int high,int value){
    while(low <= high) {
        int mid = (low + high)/2;
        if(a[mid] > value)
            high = mid - 1;
        else if(a[mid] < value)
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int searchInRotatedArray(int a[],int n,int val){
    
    int low = 0;
    int high = n-1;
    int sec_part = -1;
    int res = -1;
    while (low <=high){
        int mid = (low + high)/2;
        if (a[low] > a[mid])
            high = mid -1;
        else if(a[mid] > a[high])
            low = mid + 1;
        if (a[mid] > a[mid + 1]){
            sec_part = mid+1;
            break;
        }
    }
    cout<<sec_part<<endl;
    if(sec_part == -1){
        res = binarySearch(a,0,n-1,val);
    }
    else {
        int part1 = binarySearch(a,0,sec_part-1,val);
        cout<<"part1 from 0 to "<<sec_part-1<<" "<<part1<<endl;
        int part2 = binarySearch(a,sec_part,n-1,val);
        cout<<"part2 from "<<sec_part<<" to "<<n-1<<" "<<part2<<endl;
        if(part1 != -1){
            res = part1;
        }
        else if(part2 != -1){
            res = part1;
        }
    }
    return res;
}

int main() {
  int arr[] = {10, 20, 40, 60, 5, 8}, n = 6;
  int x = 5;
	cout << search(arr, n, x);

	return 0;
}