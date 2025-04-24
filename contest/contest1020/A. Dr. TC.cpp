// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<string> vec;
        
        for (int i = 0; i < n; i++) {
            string st = s;  
            st[i] = (s[i] == '0') ? '1' : '0';  
            vec.push_back(st);  
        }

        int count = 0;
        for (auto it : vec) {
            for (auto kit : it) {
                if (kit == '1') {
                    count++;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}
