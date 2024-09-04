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

int solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int h = n / 2;
  for (int i = 0; i < h; i++) {
    int a = s[i] - 'a' + 1;
    int b = s[n - i - 1] - 'a' + 1;
    if (abs(a - b) != 1 || abs(a - b) != 2) {
      return "NO";
    }
  }
  return "YES";
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
