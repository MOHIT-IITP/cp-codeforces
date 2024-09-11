// MOHIT-IITP
#include <algorithm>
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
  int n, m;
  int t, c;
  cin >> n >> m;

  vector<pair<int, int>> vec;

  for (int i = 1; i <= n; i++) {

    cin >> t;
    vec.pb({t, i});
  }

  sort(vec.begin(), vec.end());

  int count = 0, sum = 0;
  for (auto it : vec) {
    sum += it.first;
    if (sum > m) {
      break;
    }
    count++;
  }

  // printing the answer
  cout << count << endl;

  for (int i = 0; i < count; i++) {
    cout << vec[i].second << " ";
  }
}

int main() {
  fast;
  solve();
  return 0;
}
