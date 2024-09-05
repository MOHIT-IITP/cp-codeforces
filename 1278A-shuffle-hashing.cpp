#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll m, n, b, c, d, i, j, k, x, y, z, l, q, r;
    string s1, s2, s3, s4;

    ll cnt = 0, sum = 0;
    bool ans = 0;
    cin >> s1 >> s2;

    sort(s1.begin(), s1.end());

    for (i = 0; i + s1.size() <= s2.size(); i++) {
      s3 = s2.substr(i, s1.size());
      sort(s3.begin(), s3.end());
      if (s1 == s3) {
        ans = 1;
        break;
      }
    }

    if (!ans)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }

  return 0;
}
