#include<iostream>
using namespace std;

int main() {
    long int n;
    long long int counter=0;
    cin>>n;
    long long int arr[n];
    
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    
    for(int i=1;i<n;i++) {
        if (arr[i] < arr[i-1]) {
            counter += arr[i-1] - arr[i];
            arr[i] += arr[i-1] - arr[i];
        }
    }
    
    cout<<counter<<endl;
}