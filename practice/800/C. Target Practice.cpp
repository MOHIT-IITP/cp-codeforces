// // MOHIT-IITP template
// #include <bits/stdc++.h>
// using namespace std;
//
// #define ll long long
// #define pb push_back
// #define MOD 1000000007
//
// void solve() {
//   vector<vector<char>> vec(10,vector<char>(10));
//   int ans = 0 ;
//   for(int i=0 ; i < 10; i++){
//     for(int j = 0 ; j < 10; j++){
//       cin>>vec[i][j];
//       if(vec[i][j] == 'X'){
//         if(i==0 || i == 9){
//           ans += 1;
//         }
//         else if(j==0 || j == 9){
//           ans += 1;
//         }
//         else if(i==1 || i == 8   ){
//           ans += 2;
//         }
//         else if (j == 1 || j == 8){
//           ans += 2;
//         }
//         else if(i == 2 || i == 7   ){
//           ans += 3;
//         }
//         else if(j == 2 || j == 7){
//           ans += 3;
//         }
//         else if(i == 3 || i == 6   ){
//           ans += 4;
//         }
//         else if(j == 3 || j == 6){
//           ans += 4;
//         }
//         else if(i==4 || i ==5){
//           ans += 5;
//         }
//         else if(j==4 || j ==5){
//           ans += 5;
//         }
//       }
//     }
//   }
//   cout<<ans<<endl;
// }
//
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t; cin >> t;
//     while (t--) solve();
//     return 0;
// }

// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

void solve() {
  vector<vector<char>> vec(10,vector<char>(10));
  int ans = 0 ;
  for(int i=0 ; i < 10; i++){
    for(int j = 0 ; j < 10; j++){
      cin>>vec[i][j];
      if(vec[i][j] == 'X'){
        int dist = min({i,j,9-i, 9-j});
        ans += dist + 1;
      }
    }
  }
  cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
