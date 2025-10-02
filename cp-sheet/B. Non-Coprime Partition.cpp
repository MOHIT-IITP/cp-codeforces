// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

int main() {
    int n;
    cin>>n;

    if(n<=2){
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
    cout<<n-1;
    for(int i =1;i<=n-1;i++)
        cout<<" "<<i;
    puts(" ");
    cout<<"1 "<<n<<endl;
}
