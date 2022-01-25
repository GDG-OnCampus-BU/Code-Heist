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
        int n, ans = 0, x;
        cin >> n;

        for(int i=0; i < (n * 2 + 1); i++){
            cin >> x;
            ans = ans ^ x;
        }
        cout << ans << endl;
    }
    return 0;
}
