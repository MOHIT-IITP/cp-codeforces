// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

void solve() {
  int n;cin>>n;
  vector<int> a(n, 0);
  for(auto & x : a) cin>>x;

  vector<int> b, c;

  sort(a.begin(), a.end());
  if(a[0] == a.back()){
    cout<<-1<<endl;
    return;
  }else{
    int it = 0 ;
    while(a[it] == a[0]) it++;
    cout<<it<<" "<< n-it<<endl;
    for(int i = 0 ; i < it ; i++) cout<<a[i]<<" ";
    cout<<endl;
    for(int j = it ; j < n ; j++) cout<<a[j]<<" ";
    cout<<endl;
  }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
