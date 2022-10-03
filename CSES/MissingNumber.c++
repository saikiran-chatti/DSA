#include<iostream>
using namespace std;

int main() {
        int n;
        cin>>n;
        long int sum = 0;  

        for(int i=0;i<n-1;i++) {
            int temp;
            cin>>temp;
            sum += temp;
        }
    
        long int maxi = ((long long int)n * (long long int)(n+1))/2;
        cout<<(maxi-sum);
}