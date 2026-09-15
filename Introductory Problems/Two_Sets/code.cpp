#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
typedef long long ll;
#define endl '\n'
 
int main() {
    fastio;
 
    ll n;
    cin >> n;
 
    ll ans = n*(n+1)/2;
    if (ans%2)
        cout << "NO" << endl;
 
    else {
        ll sum = 0;
        ans /= 2;
        vector<int> v1,v2;
 
        for (int i=n; i>0; i--) {
            if (sum + i <= ans) {
                sum += i;
                v1.push_back(i);
            } else
                v2.push_back(i);
        }
 
        cout << "YES" << endl;
        
        cout << v1.size() << endl;
        for (int i: v1)
            cout << i << ' ';
        cout << '\n' << v2.size() << endl;
        for (int i: v2)
            cout << i << ' ';
    }   
    return 0;
}