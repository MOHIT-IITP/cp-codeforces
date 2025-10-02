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
  cin >> n; // missing input for n
  int even  = 0, odd = 0;
  vector<int> vec(n);
  
  for(int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  for(int i = 0; i < n; i++) {
    if(i % 2 == 0) {  // even index
      if(vec[i] % 2 != 0) {
        even++;
      }
    } else {  // odd index
      if(vec[i] % 2 == 0) {
        odd++;
      }
    }
  }

  if(even == odd) {
    cout << even << endl;
  } else {
    cout << -1 << endl;
  }
}


int main() {
  fast;
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
