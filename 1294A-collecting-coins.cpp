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
  int a, b, c, n;
  cin >> a >> b >> c >> n;
  int total = a + b + c + n;
  if (total % 3 != 0 || total / 3 < a || total / 3 < b || total / 3 < c) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
