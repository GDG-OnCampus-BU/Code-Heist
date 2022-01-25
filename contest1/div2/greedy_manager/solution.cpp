#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];

        long long ans = INT64_MIN, x = 0;
        for(int i=0; i<n; i++){
            x +=arr[i];
            ans = max(ans, x);
            x = max(x, 0ll);
        }
        cout << ans << endl;
    }  
    return 0;
}
