#include <iostream>
#include <set>
using namespace std;

int main() {
  long int n,tot = 0;
  cin>>n;
  
  set<unsigned long long int> s;
  unsigned long long int reqSum = (n * (n+1))/2;
  if (reqSum % 2 != 0) {
    cout<<"NO";
    return 0;
  }
  cout<<"YES"<<endl;
  reqSum/=2;
  for(int i=n;i>0;i-=2) {
    if ( (tot + i) <= reqSum) {
      s.insert(i);
      tot+=i;
    } else {
      unsigned long long int diff = reqSum - tot;
      if (diff > 0) {
        tot += diff;
        s.insert(diff);
      }
      break;
    }
      
  }
  cout<<(n-s.size())<<endl;
  for(long int i=1;i<=n;i++) {
    if (s.find(i) == s.end()) {
      cout<<i<<" ";
    }
  }
  cout<<endl<<s.size()<<endl;
  for(auto i = s.begin(); i != s.end();i++) {
    cout<<*i<<" ";
  }

  return 0;
}