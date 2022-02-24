#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int circularSubarraySum(vector<int> arr, int n){
    // your code here

    int ans = INT32_MIN, x = 0;

    int tot = 0;

    for(int i=0;i<n;i++){

    x += arr[i];

    ans = max(ans, x);

    x = max(0, x);

    tot += arr[i];

    }

    int neg = INT32_MIN;

    x = 0;

    for(int i=0;i<n;i++){

    x -= arr[i];

    neg = max(neg, x);

    x = max(0, x);

    }

    // cout<<neg<<" "<<tot<<endl;

    if((tot+neg)!=0 && (tot+neg)>ans)ans = tot+neg;

    return ans;

}


int main() {

    int t;

    cin>>t;

    while(t--){

    int n;

    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++)cin>>v[i];

    cout<<circularSubarraySum(v, n)<<endl;

    }

    return 0;

}
