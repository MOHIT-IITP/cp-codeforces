// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el endl
#define pb push_back
#define MOD 1000000007

void solve() {
    int n;cin>>n;
    int a;cin>>a;
    int b;cin>>b;

    if(a+b >= n){
        if(a==n && b ==n){
            cout<<"Yes"<<el;
        }else{
            cout<<"No"<<el;
        }
    }else{
        int temp = n - a - b;
        if(temp > 1){
            cout<<"Yes"<<el;
        }else{
            cout<<"No"<<el;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
