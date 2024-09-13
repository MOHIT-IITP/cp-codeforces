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
  int l, r;
  cin >> l >> r;
  int x = 0, y = 0;
  if (l * 2 <= r) {
    x = l;
    y = l * 2;
  } else {
    x = -1;
    y = -1;
  }
  cout << x << " " << y << endl;
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
