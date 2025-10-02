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
  int h1, h2, h3, h4, h5, m1, m2, m3;
  char c;
  cin >> h1 >> c >> m1;
  cin >> h2 >> c >> m2;

  h3 = (h1 * 60) + m1;
  h4 = (h2 * 60) + m2;

  h5 = (h3 + h4) / 2;

  int h = h5 / 60; // getting the hour
  int m = h5 % 60; // getting the minute

  if (h > 9 && m > 9) {
    cout << h << ":" << m << endl;
  } else {
    if (h < 10) {
      cout << 0;
    }
    cout << h << ":";
    if (m < 10) {
      cout << 0;
    }
    cout << m;
  }
}

int main() {
  fast;
  solve();
  return 0;
}
