// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

int can(ll n, ll m) {
    ll cnt = 0;
    for (ll k = 1;; k++) {
        ll val = n / (k * k * k);
        if (!val) break;
        cnt += val;
    }
    return cnt >= m;
}

ll check(ll n) {
    ll cnt = 0;
    for (ll k = 2; k * k * k <= n; ++k) {
        ll val = n / (k * k * k);
        if (!val) break;
        cnt += val;
    }
    return cnt;
}

int main() {
    ll m;
    cin >> m;
    ll lo = 0, hi = 1e18;
    while (lo < hi) {
        ll mid = (lo + hi) / 2;
        if (can(mid, m)) hi = mid;
        else lo = mid + 1;
    }
    if (check(lo) != m) cout << "-1";
    else cout << lo;
    return 0;
}

