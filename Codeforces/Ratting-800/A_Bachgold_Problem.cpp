#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1e9 + 7
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e5 + 10;
using namespace std;
/*---------------------------------------------------------------*/
  
void solve(){
    int n;
    cin >> n;
    if(n % 2 == 0){
       cout << n / 2 << nl;
       for(int i = 0; i < n / 2; ++i){
           cout << 2 << ' ';
       }
    }else{
        cout << n / 2 << nl;
        for(int i = 0; i < n / 2 - 1; ++i){
            cout << 2 << ' ';
        }
        cout << 3 << ' ';
    }
}

int main(){
    FAST_IO;
    //Start Here
    int t=1;
    // cin >> t;
    while (t--){
        solve();
    }
    return 0;
}