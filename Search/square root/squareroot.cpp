#include <iostream>
using namespace std;

long long int floorSqrt(long long int x) 
{
    long long int low = 0;
    long long int high = x;
    long long int middle;
    long long int res =0 ;
    
    while(low <=high){
        middle = (low + high)/2;
        long long int sq = middle * middle;
        if(sq == x)
            return middle;
        else if( sq > x)
            high = middle -1;
        else{
            low = middle + 1;
            res = middle;
        }
    }
    
    return res;
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout << floorSqrt(n) << endl;
	}
    return 0;   
}