#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        int zero = 0, one = 0;
        string res = "";
        int total = 1;  

        for (int i = 0; i < n; i++) {
            res += to_string(vec[i]);  

            if (vec[i] == 0) {
                zero++;
            } else {
                one++;
            }

            if (zero == one) {
                string swapped = " ";
                for(auto it : res){
                    swapped += (it == '0') ? '0' : '1';
                }

                if (stoi(swapped) > stoi(res)) {
                    total = i+1;
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}
