#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
typedef long long ll;
 
/* 
or é inreversivel
*/
 
int main() {
    fastio;
 
    int n,k;
    ll x,a,b,c;
    cin >> n >> k;
    cin >> x >> a >> b >> c;
    
    // gera o vetor 
    vector<ll> arr(n);
    arr[0] = x;
    for (int i=1; i<n; i++)
        arr[i] = (a*arr[i-1]+b) % c;
    
    // prefix ors
    vector<ll> pf_ors(n);
    for (int i=0; i<n; i++) {
        if (i%k == 0)
            pf_ors[i] = arr[i];
        else
            pf_ors[i] = pf_ors[i-1] | arr[i];    
    }
    
    // suffix ors
    vector<ll> sf_ors(n);
    sf_ors[n-1] = arr[n-1];
    for (int i=n-2; i>-1; i--) {
        if (i%k == k-1)
            sf_ors[i] = arr[i];
        else
            sf_ors[i] = sf_ors[i+1] | arr[i];    
    }
 
    // ors windows 
    ll ans = 0;
    for (int i=k-1; i<n; i++)
        ans ^= pf_ors[i] | sf_ors[i-k+1];
 
 
    cout << ans << endl;
    return 0;
}