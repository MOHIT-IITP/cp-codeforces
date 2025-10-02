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
    ll res = 0;
    ll n,m,k; 
    cin>>n>>m>>k;
    vector<int> vec(n);

    // taking the input in the vector
    for(int i =0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());

    int first = vec[n-1];
    int second = vec[n-2];

    int count =  m/(k+1);

    ll remainder = m % (k+1);
    res = count * (k * first + second) + remainder * first;
    cout<<res<<endl;
}

int main() {
  fast;
  solve();
  return 0;
}
