#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long 
#define endl '\n'
 
int main() {
    fastio;
 
    int n;
    cin >> n;

    ll ans = 0;
    for (int i=5; i<=n; i*=5)
        ans += n/i;
 
    cout << ans << endl;
    return 0;
}