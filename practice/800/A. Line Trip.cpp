#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    int x;cin>>x;

    vector<int> vec(n);
    for(int i = 0; i < n ; i++) cin>>vec[i];

    int minVol = max (vec[0], (x - vec[n-1]) * 2);


    for(int i = 1 ; i < n ; i++){
      minVol = max(minVol, vec[i] - vec[i-1]);
    }


    cout<<minVol<<endl;

  }
  return 0;
}


// 3   no of tanks
// 7   0 - 7 - 0  path
// 1 2 5  pump distance

// 7 - 5 = 2 * 2 = 4 // ans
// 0 - 1 = 1 
// 1 - 2 = 1
// 2 - 5 = 3 
