#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int a , b , c ; cin >> a >> b >> c;


        ll des_a =  a - c + 1 ;
        ll des_b = b - c + 1;

        cout << cal(2 , des_a) << string(c-1,'0') << " " << cal(3,des_b) << string(c-1,'0') << endl ;

    }
    ll cal(ll pow ,ll cnt){
        ll no = pow ;
        while( digit(no) < cnt){
            no *= pow ;
        }
        return no ;
    }
    ll digit(ll no){
        ll cnt = 0 ;
        while(no){
            ++ cnt ;
            no /= 10 ;
        }
        return cnt ;
    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
}
