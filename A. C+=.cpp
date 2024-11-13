#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

int solve(){
    int a, b, n;
    cin >> a >> b >> n;
    
    int count = 0;
    
    while (a <= n && b <= n) {
        if (a <= b) {
            a += b;
        } else {
            b += a;
        }
        count++;
    }
    
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;  // Print the result of each test case
    }
    return 0;
}

