#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int customSort(pair<int,int> a, pair<int,int> b) {
  double res1 = a.first / a.second;
  double res2 = b.first / b.second;

  return res1 > res2;
}

int main() {

  int n,m;
  cout<<"Enter size of array: "<<endl;
  cin>>n;
  cout<<"Enter the weight of the knapsack:"<<endl;
  cin>>m;

  pair <int,int> arr[n];
  cout<<"Enter the values and weight respectively"<<endl;
  for(int i=0;i<n;i++) {
    cin>>arr[i].first;
    cin>>arr[i].second;
  }

  sort(arr,arr+n,customSort);

  for(int i=0;i<n;i++) {
    cout<<arr[i].first<<" "<<arr[i].second<<endl;
  }
  
  int rem = m;
  double res = 0;
  for(int i =0;i<n;i++) {
    if(rem > arr[i].second) {
      rem -= arr[i].second;
      res += double (arr[i].first);
    } else {
      res += double (arr[i].first * (double (rem) / arr[i].second)) ;
      break;
    }
  }
  
  cout<<"Result: "<<endl;
  cout<<res<<endl;
  return 0;
}