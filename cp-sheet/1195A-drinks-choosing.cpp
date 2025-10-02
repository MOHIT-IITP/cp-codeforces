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
    ll n , k;
    cin>>n>>k;
    ll x;

    int cap =ceil(1.0*n/2);
    int even = 0 , odd = 0;
    vector<int> vec(k+1);
    for(int i =0;i<n;i++){
        cin>>x;
        vec[x]++;
    }
    for(int i =0;i<=k;i++){
        if(vec[i] % 2 ) even += vec[i]-1 , odd++; 
        else even += vec[i];
    }

    int res=0;
    res += 2*min(even / 2,cap);
    cap -= min(even / 2, cap);
    res+=cap;
    cout<<res;
}

int main() {
  fast;
  solve();
  return 0;
}
