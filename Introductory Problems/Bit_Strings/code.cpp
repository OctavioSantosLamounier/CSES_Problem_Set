#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
typedef unsigned long long ll;
const int M = 1e9+7;
 
ll binPow (ll a, ll b){
    if(b == 0) return 1;
 
    ll tmp = binPow(a,b/2);
    tmp *= tmp;
 
    if(b&1) tmp *= a;
 
    return tmp;
}
 
ll itBinPow (ll a, ll b){
    ll ans = 1;
    while(b) {
        if (b&1) ans = (ans * a) % M;
        a = (a*a) % M;
        b /= 2;
    }
    return ans;
}
 
int main() {
    fastio;
 
    ll n;
    cin >> n;
 
    ll ans = itBinPow(2,n);
 
    cout << ans << endl;
    return 0;
}