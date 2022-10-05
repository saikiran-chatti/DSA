#include<iostream>
using namespace std;

int main() {
    int n,count = 0;
    cin>>n;
    
    if (n == 1 || n == 2 || n == 3 || n == 4) {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    
    if (n%2 == 1) {
        for(int i=1;count<n;i+=2,++count) {
            if (i == n) {
                cout<<i<<" ";
            } else {
                cout<<i%n<<" ";
            }
        }
    } else {
        for(int i=1;count<n;i+=2,++count) {
            if (i == n) {
                cout<<i<<" ";
            } else if (i < n){
                cout<<i%n<<" ";
            } else {
                cout<<(i%n)+1<<" ";
            }
        }
    }
    
    
}