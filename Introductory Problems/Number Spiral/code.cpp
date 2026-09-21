#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
typedef unsigned long long ll;
 
int main() {
    fastio;
 
    int n;
    cin >> n;
 
    while (n--) {
        ll ans;
        int x,y;
        cin >> x >> y;
 
        ll layer = max(x,y);
        ll max_value = layer*layer;
        ll min_value = (layer-1) * (layer-1) + 1;
        
        if (x <= y) { // vertical
            if (layer%2) 
                ans = max_value - (x-1);
            else        
                ans = min_value + (x-1); 
        }
        else { // horizontal
            if (layer%2)
                ans = min_value + (y-1);
            else
                ans = max_value - (y-1);
        }
 
        cout << ans << endl;
    }
    return 0;
}