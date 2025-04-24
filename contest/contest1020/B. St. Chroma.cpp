// MOHIT-IITP template
// wrong answer
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> p;

        for (int i = 0; i < x; i++)
            p.push_back(i);

        for (int i = n - 1; i > x; i--)
            p.push_back(i);

        p.push_back(x);

        for (int val : p)
            cout << val << " ";
        cout << "\n";
    }
    return 0;
}
