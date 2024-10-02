#include<bits/stdc++.h>
using namespace std;

void solve(){
    int k , n;
    int ans = 0;
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
