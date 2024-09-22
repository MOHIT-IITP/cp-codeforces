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
  ll k, r, n;
  cin >> k >> r;
  for (ll i = 1; i <= 9; i++) {
    if ((k * i) % 10 == r || (k * i) % 10 == 0) {
      n = i;
      break;
    }
  }
  cout << n << endl;
}

int main() {
  fast;
  solve();
  return 0;
}
