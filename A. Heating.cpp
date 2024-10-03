#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll c, sum;
    cin>>c>>sum;
    c = min(c, sum);
    ll t = sum / c;
    ll extra = sum % c;
    ll total = c - extra;
    ll ans = (t * t * total) + (extra * (t+1) * (t+1));
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
