#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool _search(vector<vector<int> > arr, int n, int m, int x, int l = 0, int r = 0)
{
    // code here
    if(l>n)return false;
    if(r>m)return false;
    int mi = (l+n)/2;
    int mj = (r+m)/2;

    if(arr[mi][mj] == x)return true;
    else if(arr[mi][mj] > x){
        return _search(arr, mi-1, m, x, l, r) || _search(arr, n, mj-1, x, l, r);
    }
    else {
        return _search(arr, n, m, x, mi+1, r) || _search(arr, n, m, x, l, mj+1);
    }
}

bool search(vector<vector<int> > arr, int n, int m, int x){
    return _search(arr, n-1, m-1, x);
}


int main() {
    int N, M;
    cin>>N>>M;
    vector<vector<int>> v(N, vector<int>(M));
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)cin>>v[i][j];
    }
    int x;
    cin>>x;
    if(search(v, N, M, x))cout<<1<<endl;
    else cout<<0<<endl;
    return 0;
}
