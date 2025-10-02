#include<iostream>
#include<string>
#include<cmath>

using namespace std;

bool checkPrime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x1, x2;
        cin >> x1 >> x2;

        string s = to_string(x1);
        string d = "";

        for (int i = 0; i < x2; i++) {
            d += s;
        }

        try {
            long long num = stoll(d);
            if (checkPrime(num)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
        catch (const out_of_range& e) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
