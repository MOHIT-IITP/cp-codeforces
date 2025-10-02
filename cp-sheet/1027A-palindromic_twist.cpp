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

int main() {
  fast;
  int tc, n, h;
  string str;
  bool k;

  cin >> tc;
  cin.ignore();

  while (tc--) {
    cin >> n;
    cin >> str;

    h = n / 2;
    k = true;

    for (int i = 0; i < h; i++) {
      int d = abs(str[i] - str[n - i - 1]);

      if (!(d == 0 || d == 2)) {
        k = false;
        cout << "NO\n";
        break;
      }
    }

    if (k) {
      cout << "YES\n";
      return 0;
    }
  }
}
