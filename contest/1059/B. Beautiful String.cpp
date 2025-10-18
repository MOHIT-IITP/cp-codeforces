#include <bits/stdc++.h>
using namespace std;

bool incr(const vector<char> &v) {
    for (int i = 1; i < v.size(); ++i) {
        if (v[i] < v[i-1]) return false;
    }
    return true;
}

bool isPali(const string &s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int ma = 0; ma < (1 << n); ++ma) {
        vector<int> sel_ind;
        vector<char> p;
        string remaining;

        for (int i = 0; i < n; ++i) {
            if (ma & (1 << i)) {
                sel_ind.push_back(i + 1);
                p.push_back(s[i]);
            } else {
                remaining += s[i];
            }
        }

        if (incr(p) && isPali(remaining)) {
            cout << sel_ind.size() << "\n";
            for (int idx : sel_ind) cout << idx << " ";
            cout << "\n";
            return;
        }
    }

    cout << "-1\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
