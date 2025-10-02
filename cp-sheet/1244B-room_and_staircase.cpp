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
  vector<int> nums(n);
  int maxLen = INT_MIN;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    nums.pb(x);
  }
  int countStair = 0;
  for (auto it : vec) {
    if (it == 1) {
      countStair += 1;
    }
  }

  // checking the for the stair
  for (int i = 0; i < n; i++) {
    if (nums[i] == 1) {
      int currLen = i * 2;
      maxLen = max(currLen, maxLen);
    }
  }
  return max(maxLen, n + countStair);
}

int main() {
  fast;
  solve();
  return 0;
}
