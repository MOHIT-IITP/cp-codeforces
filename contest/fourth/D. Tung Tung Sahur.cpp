#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s, r;
        cin >> s >> r;
        
        int left = 0, right = 0;
        for(auto it : s) {
            if(it == 'L') {
                left++;
            } else {
                right++;
            }
        }
        
        int left1 = 0, right1 = 0;
        for(auto i : r) {
            if(i == 'L') {
                left1++;
            } else {
                right1++;
            }
        } 
        
        if(left1 >= left && left1 <= 2 * left && right1 >= right && right1 <= 2 * right) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
