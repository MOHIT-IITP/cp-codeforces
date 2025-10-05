// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

void solve() {
    int a, b , c,d;cin>>a>>b>>c>>d;
    if(b<=d && c<= a+d-b){
        cout<<(d-b)+(a+d-b-c)<<endl;
    }else{
        cout<<-1<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
