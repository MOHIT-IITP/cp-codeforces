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
  int n;
  cin >> n;
  int candi[n];

  for (int j = 0; j < n; j++) {
    cin >> candi[j];
  }

  bool flag = true;

  for (int i = 0; i < n; i++) {
    float k = (double)candi[i] / 2;
    if ((candi[i] % 2) != 0) {
      if (flag) {
        candi[i] = ceil(k);
        flag = false;
      } else if (flag == false) {
        candi[i] = floor(k);
        flag = true;
      }
    } else {
      candi[i] /= 2;
    }
  }

  for (const auto &it : candi) {
    cout << it << endl;
  }
}

int main() {
  fast;
  solve();
  return 0;
}
