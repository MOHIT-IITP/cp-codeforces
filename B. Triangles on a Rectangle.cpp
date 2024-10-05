#include "bits/stdc++.h"
using namespace std;
using ll = int64_t;

ll area(ll x1, ll x2, ll x3, ll y1, ll y2, ll y3) {
    return abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll tc;
    cin >> tc;
    ll w, h, x, y, k1, k2, k3, k4;
    while (tc--) {
        vector<array<ll, 2>> v1, v2, v3, v4;
        ll res = 0;
        cin >> w >> h;
        cin >> k1;
        for (ll i = 0; i < k1; ++i) cin >> x, v1.push_back({x, 0});
        cin >> k2;
        for (ll i = 0; i < k2; ++i) cin >> x, v2.push_back({x, h});
        cin >> k3;
        for (ll i = 0; i < k3; ++i) cin >> y, v3.push_back({0, y});
        cin >> k4;
        for (ll i = 0; i < k4; ++i) cin >> y, v4.push_back({w, y});
        for (ll i = 0; i < k1; ++i) res = max(res, area(v2[0][0], v2[k2 - 1][0], v1[i][0], v2[0][1], v2[k2 - 1][1], v1[i][1]));
        for (ll i = 0; i < k2; ++i) res = max(res, area(v1[0][0], v1[k1 - 1][0], v2[i][0], v1[0][1], v1[k1 - 1][1], v2[i][1]));
        for (ll i = 0; i < k3; ++i) res = max(res, area(v4[0][0], v4[k4 - 1][0], v3[i][0], v4[0][1], v4[k4 - 1][1], v3[i][1]));
        for (ll i = 0; i < k4; ++i) res = max(res, area(v3[0][0], v3[k3 - 1][0], v4[i][0], v3[0][1], v3[k3 - 1][1], v4[i][1]));
        cout << res << '\n';
    }
    return 0;
}
