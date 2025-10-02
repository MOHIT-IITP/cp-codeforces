#include <bits/stdc++.h>
#include <numeric>
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

  if (n % 4 != 0) {
    cout << "NO" << endl;
    return;
  }

  vector<int> ans;
  int evenSum = 0, oddSum = 0;

  // Add even numbers
  for (int i = 2; i <= n; i += 2) {
    ans.pb(i);
    evenSum += i;
  }

  // Add odd numbers
  for (int i = 1; i < n - 1; i += 2) {
    ans.pb(i);
    oddSum += i;
  }

  // Add the remaining number to balance the sums
  ans.pb(evenSum - oddSum);

  cout << "YES" << endl;
  for (auto it : ans) {
    cout << it << " ";
  }
  cout << endl;
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

