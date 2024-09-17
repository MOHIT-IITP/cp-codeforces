// MOHIT-IITP
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD1 998244353
#define MOD 1000000007
#define fast                                                                   \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

void solve() {
  ll x, y, n;
  ll k;
  ll ans;
  cin >> x >> y >> n;
  int temp = ((n % x) - y + x) % x;
  ans = n - temp;
  cout << ans << endl;
}

int main() {
  fast;
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
