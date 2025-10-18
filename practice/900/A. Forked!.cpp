// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el endl
#define pb push_back
#define MOD 1000000007

void solve() {
    int x, y;cin>>x>>y;
    int k1, k2;cin>>k1>>k2;
    int q1, q2;cin>>q1>>q2;
    set<pair<int, int>> king;
    set<pair<int, int>> queen;

    // +x +y
    // +x -y
    // -x +y
    // -x -y
    //
    // +y +x
    // +y -x
    // -y +x
    // -y -x
    
    king.insert({k1+x , k2+y});
    king.insert({k1+x , k2-y});
    king.insert({k1-x , k2+y});
    king.insert({k1-x , k2-y});
    king.insert({k1+y , k2+x});
    king.insert({k1+y , k2-x});
    king.insert({k1-y , k2+x});
    king.insert({k1-y , k2-x});

    queen.insert({q1+x , q2+y});
    queen.insert({q1+x , q2-y});
    queen.insert({q1-x , q2+y});
    queen.insert({q1-x , q2-y});
    queen.insert({q1+y , q2+x});
    queen.insert({q1+y , q2-x});
    queen.insert({q1-y , q2+x});
    queen.insert({q1-y , q2-x});

    int count = 0 ;
    for(auto prk : king){
        if(queen.find(prk) != queen.end()){
            count++;
        }
    }
    cout<<count<<el;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
