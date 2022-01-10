#include<iostream>
using namespace std;

int main() {
    int n,x=5,count=0; 
    cin>>n;
    
    while(n/x>0){
        count += n/x;
        x*=5;        
    }
    
    cout<<count;
}