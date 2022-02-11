#include<iostream>
#include<string>
using namespace std;

	
bool pali(string str,int k){
  if(k>str.length()/2)
    return true;
  if(str[k]!=str[str.length()-k-1])
    return false;

  k++;
  return pali(str,k);
}

int main() {
  string inp;
  getline(cin,inp);
  cout<<pali(inp,1);
  
  return 0;
}
