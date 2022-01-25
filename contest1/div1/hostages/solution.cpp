#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool isValid(int a, int b, int c){
    if ((a + b) <= c) return false;
    if ((b + c) <= a) return false;
    if ((c + a) <= b) return false;

    return true;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        int cnt = 0;
        for(int i=n-1; i>0; i--){
            int j=0, k = i - 1;

            while(j < k){
                if (isValid(v[i], v[j], v[k])) { cnt += (k-j); k--; }
                else j++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
