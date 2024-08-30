// MOHIT-IITP
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD1 998244353
#define MOD 1000000007 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	int n , x , y; cin >> n >> x >> y;
	vector<int> v(n);
	
	for(int &m : v)
		cin >> m;
		
	for(int i = 0 ; i < n ; i++){
		int t = v[i];
		bool flag = true;
		// working (checking) on the left one
		for(int j =i-1 ; j > i-x-1; j--){
			if(j>=0)
			if(t >= v[j])
				flag = false;
		}
		
    // checing on the right one
		for(int j = i+1 ; j < i+y+1 ; j++){
			if(j<n)
			if(t >= v[j])
				flag = false;
		}
		
		if(flag){
			
			cout<<i+1<<endl;
			return 0;
			
		}
		
	}

	
    return 0;
}
