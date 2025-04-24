#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        
        // Output a segment of length m+1 from the range [l, r]
        cout << l + m - n << " " << l + m - n + m << endl;
    }
    return 0;
}

