// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

int solve(){
    int n;
    cin >> n;  
    int x, y, z, xSum(0) , ySum(0), zSum(0);
    while(n--){
        cin>>x>>y>>z;
        xSum += x;
        ySum += y;
        zSum += z;
    }
    if(xSum != 0 || ySum != 0 || zSum != 0){
        return 0;
    }
    return 1;
}

int main() {
    int res = solve();
    cout << (res ? "YES" : "NO");  
    return 0;
}

