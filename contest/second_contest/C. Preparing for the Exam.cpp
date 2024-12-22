#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
#define vc vector<int>

int main() {
    int t;
    cin >> t;
    while(t--){
        ll n, m, k;
        cin >> n >> m >> k;
        vc curr(n);
        set<int> klist;
        string ans = "";
        int count = 1;
        
        for(int i = 0; i < n; i++) {
            cin >> curr[i];
        }
        
        for(int i = 0; i < k; i++) {
            int x;
            cin >> x;
            klist.insert(x);
        }

        if (n != m) {
            ans = string(n, '0');
        } else if (k == n) {
            ans = string(n, '1');
        } else {
            while(count <= m) {
                if(klist.find(count) == klist.end()) {
                    ans += "1";
                } else {
                    ans += "0";
                }
                count++;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}

