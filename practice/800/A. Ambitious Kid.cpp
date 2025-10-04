// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

void solve() {
  int n;cin>>n;
  vector<int> vec(n);
  for(int i = 0 ; i < n ; i++) cin>>vec[i];
  int small = INT_MAX ;
  for(auto it : vec){
    small = min(small, abs(it));
  }
  cout<<small<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
