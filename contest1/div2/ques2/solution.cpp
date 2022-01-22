#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n, ans=0, x;
        cin >> n >> x;

        vector<int> v(n);
        for (int i=0; i<n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        int j = 0, k = n - 1;
        while(j < k){
            if ((v[j] + v[k]) == x) { ans += 2; j++; }
            else if ((v[j] + v[k]) > x) k--;
            else j++;
        }
        cout << ans << endl;
    }
    return 0;
}
