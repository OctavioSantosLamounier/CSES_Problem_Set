#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
typedef unsigned long long ll;
 
int main() {
    fastio;

    int n;
    cin >> n;
    
    for (int i=1; i<=n; i++) {
        if (i==1)
            cout << 0 << endl;
        else {
            ll cells = i*i;
            // total de celulas
            ll total = cells*(cells-1) / 2;
            // lajes
            ll lajes = 4 * (i-1) * (i-2);
 
            cout << total - lajes << endl;
        }
    }
    
    return 0;
}