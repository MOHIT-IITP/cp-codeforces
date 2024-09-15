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
  int x, y, z;
  cin >> x >> y >> z;
  if (x > y)
    swap(x, y);
  if (x > z)
    swap(x, z);
  if (y > z)
    swap(y, z);
  if (y == z) {
    cout << "YES" << endl;
    cout << x << " " << x << " " << z << endl;
  } else {
    cout << "NO" << endl;
  }
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
