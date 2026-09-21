#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
typedef long long ll;
 
int main() {
    fastio;
 
    int n,k;
    ll x,a,b,c;
    cin >> n >> k;
    cin >> x >> a >> b >> c;
    
    ll sum=x;
    queue<ll> q;
    q.push(x);
 
    // primeira janela
    for (int i=2; i<=k; i++) {
        x = (a*x+b) % c;
        q.push(x);
        sum += x;
    }
 
    ll numXor = sum;
    // proximas janelas
    for (int i=k+1; i<=n; i++) {
        sum -= q.front();
        q.pop();

        x = (a*x+b) % c;
        q.push(x);
        sum += x;
 
        numXor ^= sum;
    }    

    cout << numXor << endl;
    return 0;
}