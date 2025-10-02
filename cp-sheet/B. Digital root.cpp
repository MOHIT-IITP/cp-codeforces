#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll k ,  n;
    ll ans = 0;
    cin>>k>>n;
    ans = ((k-1)*9) + n;
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
