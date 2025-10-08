// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el endl
#define pb push_back
#define MOD 1000000007

void solve() {
  string s;cin>>s;

  int first = s[0] - '0';
  int n = s.size(); 

  int count = ((n-1) * 9) + first;
  cout<<count<<el;

}

// 9 = 1 2 3 4 5 6 7 8 9 
// 10 = 10 20 30 40 50 60 70 80 90
// 100 = 100 200 300 400 500 600 700 800 900

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
