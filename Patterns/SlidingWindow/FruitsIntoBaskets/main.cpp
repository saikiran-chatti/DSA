#include<iostream>
#include<unordered_map>
using namespace std;

int fruitsToBasket(char *arr,int n) {
    int k = 2,wStart = 0,res=0;
    unordered_map<int,int> umap;
    for(int i=0;i<n;i++) {
        char ele = arr[i];
        umap[ele]++;

        while(umap.size() > k) {
            char wStartEle = arr[wStart];
            wStart++;
            umap[wStartEle]--;
            if (umap[wStartEle] == 0) {
                umap.erase(wStartEle);
            }
        }
        res = max(res,i-wStart+1);
    }

    return res;
}

int main() {
    int n,wStart=0;
    cin>>n;
    char arr[n];

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int res = fruitsToBasket(arr,n);
    cout<<res<<endl;

    return 0;
}