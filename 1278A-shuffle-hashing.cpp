#include <bits/stdc++.h>
using namespace std;

int main() {
  fast;
  ll t;
  cin >> t;
  while (t--) {
    ll m, n, b, c, d, i, j, k, x, y, z, l, q, r;
    string s1, s2, s3, s4;

    ll cnt = 0, sum = 0;
    bool ans = 0;
    cin >> s1 >> s2;

    sort(all(s1));

    for (i = 0; i + l(s1) <= l(s2); i++) {
      s3 = s2.substr(i, l(s1));
      sort(all(s3));
      // cout<<s1<<" "<<s3<<endl;
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
